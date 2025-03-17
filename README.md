# Sorting Algorithms in C

This project provides implementations of various sorting algorithms in C, along with their respective header files for easy integration into other projects.

## Algorithms Included

### Bubble Sort
- Time Complexity: O(n^2)
- Space Complexity: O(1)

### Selection Sort
- Time Complexity: O(n^2)
- Space Complexity: O(1)

### Insertion Sort
- Time Complexity: O(n^2)
- Space Complexity: O(1)

### Merge Sort
- Time Complexity: O(n log n)
- Space Complexity: O(n)

### Quick Sort
- Time Complexity: O(n log n) (average case), O(n^2) (worst case)
- Space Complexity: O(log n) (average case), O(n) (worst case)

### Heap Sort
- Time Complexity: O(n log n)
- Space Complexity: O(1)

### Counting Sort
- Time Complexity: O(n + k), where k is the range of the input
- Space Complexity: O(n + k)

### Radix Sort
- Time Complexity: O(nk), where n is the number of elements and k is the number of digits in the maximum element
- Space Complexity: O(n + k)

### Bucket Sort
- Time Complexity: O(n + k), where n is the number of elements and k is the number of buckets
- Space Complexity: O(n + k)

### Shell Sort
- Time Complexity: O(n^1.25)
- Space Complexity: O(1)

### Tim Sort
- Time Complexity: O(n log n)
- Space Complexity: O(n)

### Comb Sort
- Time Complexity: O(n^2)
- Space Complexity: O(1)

### Cocktail Shaker Sort
- Time Complexity: O(n^2)
- Space Complexity: O(1)

### Pigeonhole Sort
- Time Complexity: O(n + Range), where Range is the difference between the maximum and minimum elements
- Space Complexity: O(n + Range)

### Cycle Sort
- Time Complexity: O(n^2)
- Space Complexity: O(1)

### Bitonic Sort
- Time Complexity: O(n log^2 n)
- Space Complexity: O(log^2 n)

## Usage

Each sorting algorithm is implemented in its respective `.c` and `.h` files. To use any sorting algorithm in your project, simply include the corresponding header file and call the sorting function with your array and its size.

For example, to use Bubble Sort:

```c
#include "bubble_sort.h"

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr, n);

    // Print sorted array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
```