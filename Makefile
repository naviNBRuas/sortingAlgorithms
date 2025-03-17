CC = gcc
CFLAGS = -Wall -Wextra -Iinclude

SRC = src/main.c src/bubble_sort.c src/selection_sort.c src/insertion_sort.c src/merge_sort.c src/quick_sort.c src/heap_sort.c src/counting_sort.c
OBJ = $(SRC:.c=.o)
TARGET = sort

TESTS = tests/test_bubble_sort tests/test_selection_sort tests/test_insertion_sort tests/test_merge_sort tests/test_quick_sort tests/test_heap_sort tests/test_counting_sort

.PHONY: all clean test

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

test: $(TESTS)
	for test in $(TESTS); do ./$$test; done

tests/test_bubble_sort: tests/test_bubble_sort.c src/bubble_sort.c
	$(CC) $(CFLAGS) -o $@ $^

tests/test_selection_sort: tests/test_selection_sort.c src/selection_sort.c
	$(CC) $(CFLAGS) -o $@ $^

tests/test_insertion_sort: tests/test_insertion_sort.c src/insertion_sort.c
	$(CC) $(CFLAGS) -o $@ $^

tests/test_merge_sort: tests/test_merge_sort.c src/merge_sort.c
	$(CC) $(CFLAGS) -o $@ $^

tests/test_quick_sort: tests/test_quick_sort.c src/quick_sort.c
	$(CC) $(CFLAGS) -o $@ $^

tests/test_heap_sort: tests/test_heap_sort.c src/heap_sort.c
	$(CC) $(CFLAGS) -o $@ $^

tests/test_counting_sort: tests/test_counting_sort.c src/counting_sort.c
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJ) $(TARGET) $(TESTS)
