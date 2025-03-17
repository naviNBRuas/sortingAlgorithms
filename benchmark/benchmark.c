#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bubble_sort.h"
// Include other sorting headers...

#define ARRAY_SIZE 10000

void generate_random_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 10000;
    }
}

void benchmark_sort(void (*sort_func)(int[], int), int arr[], int size, const char *sort_name) {
    clock_t start, end;
    double cpu_time_used;

    start = clock();
    sort_func(arr, size);
    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("%s took %f seconds to sort %d elements.\n", sort_name, cpu_time_used, size);
}

int main() {
    int arr[ARRAY_SIZE];

    srand(time(NULL));

    generate_random_array(arr, ARRAY_SIZE);
    benchmark_sort(bubble_sort, arr, ARRAY_SIZE, "Bubble Sort");

    // Add other sorts...

    return 0;
}
