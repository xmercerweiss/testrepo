#include <stdlib.h>
#include <string.h>

#define INT_SIZE sizeof(int)

int greater_than(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}

void sort_to(int in_arr[], int length, int out_arr[]) {
	memcpy(out_arr, in_arr, length * INT_SIZE);
	qsort(out_arr, length, INT_SIZE, greater_than);
}

int max_of(int arr[], int length) {
	int sorted[length]; 
	sort_to(arr, length, sorted);
	return sorted[length-1];
}

int min_of(int arr[], int length) {
	int sorted[length]; 
	sort_to(arr, length, sorted);
	return sorted[0];
}

