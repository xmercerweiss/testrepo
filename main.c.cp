#include <stdio.h>


void print_array(const int arr[], const int len) {
	int i;

	printf("{");
	for (i = 0; i < len-1; i++) {
		printf("%d, ", arr[i]);
	}
	printf("%d}\n", arr[i]);
}

int main(int argc, char** argv) {
	
	return 0;
}
