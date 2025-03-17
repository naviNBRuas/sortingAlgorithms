#include <stdio.h>
#include <stdlib.h>
#include "pigeonhole_sort.h"

void pigeonhole_sort(int arr[], int n) {
    int min = arr[0];
    int max = arr[0];
    int range, i, j, index;

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    range = max - min + 1;
    int *holes = (int *)malloc(range * sizeof(int));
    for (i = 0; i < range; i++) {
        holes[i] = 0;
    }

    for (i = 0; i < n; i++) {
        holes[arr[i] - min]++;
    }

    index = 0;
    for (j = 0; j < range; j++) {
        while (holes[j]-- > 0) {
            arr[index++] = j + min;
        }
    }

    free(holes);
}
