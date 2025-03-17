#include <stdlib.h>
#include "bucket_sort.h"

void insertion_sort(float arr[], int n) {
    int i, j;
    float key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void bucket_sort(float arr[], int n) {
    if (n <= 0) {
        return;
    }

    struct Bucket {
        float *values;
        int size;
        int capacity;
    };

    struct Bucket *buckets = (struct Bucket *)malloc(n * sizeof(struct Bucket));
    for (int i = 0; i < n; i++) {
        buckets[i].values = (float *)malloc(n * sizeof(float));
        buckets[i].size = 0;
        buckets[i].capacity = n;
    }

    for (int i = 0; i < n; i++) {
        int bucket_index = n * arr[i];
        buckets[bucket_index].values[buckets[bucket_index].size++] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        insertion_sort(buckets[i].values, buckets[i].size);
    }

    int index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < buckets[i].size; j++) {
            arr[index++] = buckets[i].values[j];
        }
        free(buckets[i].values);
    }
    free(buckets);
}
