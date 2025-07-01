#include <stdio.h>

#include "histogram.h"

#define BAR_CHAR    '#'
#define BLANK_CHAR  ' '
#define X_AXIS_CHAR '-'

#define Y_AXIS_FORMAT    "%4d | "
#define BAR_META_FORMAT "%%%dc "

#define BAR_FORMAT_LEN 32


void print_bar_graph(int values[], int value_count, int spacing) {
	char bar_format[BAR_FORMAT_LEN];
	sprintf(bar_format, BAR_META_FORMAT, spacing);
	int max_value = max_of(values, value_count);
	for (int y = max_value; y > 0; y--) {
		printf(Y_AXIS_FORMAT, y);
		for (int x = 0; x < value_count; x++) {
			char printed;
			if (values[x] >= y) 
				printed = BAR_CHAR;
			else
				printed = BLANK_CHAR;
			printf(bar_format, printed);
		}
		putchar('\n');
	}
	int x_axis_len = value_count + (value_count * spacing);
	printf(Y_AXIS_FORMAT, 0);
	printf("\b\b+");
	for (int i = 0; i < x_axis_len; i++) 
		putchar(X_AXIS_CHAR);
	putchar('\n');
}

