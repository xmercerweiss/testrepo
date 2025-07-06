#include <string.h>
#include <ctype.h>
#include <stdio.h>

void strip(char s[]) {
	int len = strlen(s);
	int left, right;
	left = right = -1;
	printf("len = %d\n", len);
	
	char c;
	for (int i = 0; i <= len; i++) {
		char c = s[i];
		if (right < 0) {
			if (isspace(c))
				left = i+1;
			else {
				if (i == 0)
					left = 0;
				right = left;
			}
		}
		else {
			if (c == '\0' || isspace(c)) {
				right = i;
				break;
			}
		}
	}
	printf("%d-%d\n", left, right);
}

int main(int argc, char** argv) {
	char str[] = "w";
	strip(str);
	return 0;
}

