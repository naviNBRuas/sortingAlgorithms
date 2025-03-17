#include <assert.h>
#include "quick_sort.h"

void test_quick_sort() {
    int arr[] = {5, 1, 4, 2, 8};
    int sorted_arr[] = {1, 2, 4, 5, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    quick_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        assert(arr[i] == sorted_arr[i]);
    }
}

int main() {
    test_quick_sort();
    printf("All tests passed for quick sort!\n");
    return 0;
}
