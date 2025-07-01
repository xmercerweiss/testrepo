#include <stdio.h>

#include "histogram.h"

#define LENGTH(a) (sizeof(a) / sizeof(int))


int main(int argc, char** argv) {
	//printf("%d\n", Y);
	int s;
	sscanf(argv[1], "%d", &s);
	int a[] = {5, 2, 8, 1, 7, 9, 2, 1, 9};
	print_bar_graph(a, LENGTH(a), s);
}


