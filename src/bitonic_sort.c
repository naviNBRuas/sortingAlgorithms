#include "bitonic_sort.h"
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bitonic_merge(int arr[], int low, int cnt, int dir) {
    if (cnt > 1) {
        int k = cnt / 2;
        for (int i = low; i < low + k; i++) {
            if (dir == (arr[i] > arr[i + k])) {
                swap(&arr[i], &arr[i + k]);
            }
        }
        bitonic_merge(arr, low, k, dir);
        bitonic_merge(arr, low + k, k, dir);
    }
}

void bitonic_sort_rec(int arr[], int low, int cnt, int dir) {
    if (cnt > 1) {
        int k = cnt / 2;
        bitonic_sort_rec(arr, low, k, 1);
        bitonic_sort_rec(arr, low + k, k, 0);
        bitonic_merge(arr, low, cnt, dir);
    }
}

void bitonic_sort(int arr[], int n) {
    bitonic_sort_rec(arr, 0, n, 1);
}
