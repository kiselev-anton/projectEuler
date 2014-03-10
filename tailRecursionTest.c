#include "stdio.h"

long double factorial(long double number) {
	if(number == 1)
		return 1;
	else {
		return number * factorial(number - 1);
	}
}


int main()
{
	long double number = 0;
	scanf("%Lf", &number);
	number = factorial(number);
	printf("%Lf\n", number);
	return 0;
}