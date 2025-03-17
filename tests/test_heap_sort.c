#include <assert.h>
#include "heap_sort.h"

void test_heap_sort() {
    int arr[] = {5, 1, 4, 2, 8};
    int sorted_arr[] = {1, 2, 4, 5, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    heap_sort(arr, n);

    for (int i = 0; i < n; i++) {
        assert(arr[i] == sorted_arr[i]);
    }
}

int main() {
    test_heap_sort();
    printf("All tests passed for heap sort!\n");
    return 0;
}
