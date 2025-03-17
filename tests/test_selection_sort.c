#include <assert.h>
#include "selection_sort.h"

void test_selection_sort() {
    int arr[] = {5, 1, 4, 2, 8};
    int sorted_arr[] = {1, 2, 4, 5, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    selection_sort(arr, n);

    for (int i = 0; i < n; i++) {
        assert(arr[i] == sorted_arr[i]);
    }
}

int main() {
    test_selection_sort();
    printf("All tests passed for selection sort!\n");
    return 0;
}
