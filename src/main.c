#include <stdio.h>
#include "bubble_sort.h"
#include "selection_sort.h"
#include "insertion_sort.h"
#include "merge_sort.h"
#include "quick_sort.h"
#include "heap_sort.h"
#include "counting_sort.h"

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int bubble_arr[] = {64, 34, 25, 12, 22, 11, 90};
    int selection_arr[] = {64, 34, 25, 12, 22, 11, 90};
    int insertion_arr[] = {64, 34, 25, 12, 22, 11, 90};
    int merge_arr[] = {64, 34, 25, 12, 22, 11, 90};
    int quick_arr[] = {64, 34, 25, 12, 22, 11, 90};
    int heap_arr[] = {64, 34, 25, 12, 22, 11, 90};
    int counting_arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(bubble_arr) / sizeof(bubble_arr[0]);

    printf("Unsorted array: \n");
    print_array(bubble_arr, n);

    bubble_sort(bubble_arr, n);
    printf("Bubble Sort: \n");
    print_array(bubble_arr, n);

    selection_sort(selection_arr, n);
    printf("Selection Sort: \n");
    print_array(selection_arr, n);

    insertion_sort(insertion_arr, n);
    printf("Insertion Sort: \n");
    print_array(insertion_arr, n);

    merge_sort(merge_arr, 0, n - 1);
    printf("Merge Sort: \n");
    print_array(merge_arr, n);

    quick_sort(quick_arr, 0, n - 1);
    printf("Quick Sort: \n");
    print_array(quick_arr, n);

    heap_sort(heap_arr, n);
    printf("Heap Sort: \n");
    print_array(heap_arr, n);

    counting_sort(counting_arr, n);
    printf("Counting Sort: \n");
    print_array(counting_arr, n);

    return 0;
}
