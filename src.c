#include <stdbool.h>
#include <stdio.h>

#define WHITE "\e[1;97m"
#define GRAY  "\e[0;37m"
#define CLEAR "\e[0m"

#define LOWER -10
#define UPPER 100
#define STEP  5

int main () {
	double fahr, celcius;

	bool is_gray = false;
	for (fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
		celcius = (5.0/9.0) * (fahr-32);
		printf(is_gray ? GRAY : WHITE);	
		printf("%4.0fF\t%5.1fC\n", fahr, celcius);
		is_gray = !is_gray;
	}
	printf(CLEAR);
}

