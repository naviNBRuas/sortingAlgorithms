#include <assert.h>
#include "bubble_sort.h"

void test_bubble_sort() {
    int arr[] = {5, 1, 4, 2, 8};
    int sorted_arr[] = {1, 2, 4, 5, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr, n);

    for (int i = 0; i < n; i++) {
        assert(arr[i] == sorted_arr[i]);
    }
}

int main() {
    test_bubble_sort();
    printf("All tests passed!\n");
    return 0;
}
