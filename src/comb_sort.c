#include "comb_sort.h"

void comb_sort(int arr[], int n) {
    int gap = n;
    bool swapped = true;

    while (gap != 1 || swapped == true) {
        gap = (gap * 10) / 13;
        if (gap < 1) {
            gap = 1;
        }

        swapped = false;
        for (int i = 0; i < n - gap; i++) {
            if (arr[i] > arr[i + gap]) {
                int temp = arr[i];
                arr[i] = arr[i + gap];
                arr[i + gap] = temp;
                swapped = true;
            }
        }
    }
}
