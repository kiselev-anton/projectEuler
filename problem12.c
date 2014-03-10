//
//  problem12.c
//  projectEuler
//
//  Created by Антон Киселёв on 23.02.14.
//
//

#include <stdio.h>

long int divisors(long int number) {
	long int currentDivisor = 2;
	if(number == 1)
		return 1;
	else {
		while(number % currentDivisor != 0)
			currentDivisor++;
		return 1+divisors(number / currentDivisor);
	}
}

long int triangleNumber(long int i) {
	return i*(i+1) / 2;
}

int main() {
	long int number = 1;
	while(1) {
		long int numberOfDivisors = divisors(triangleNumber(number));
		if(numberOfDivisors > 50) {
			printf("%ld\n", triangleNumber(number));
			break;
		}
	if(number % 1 == 0)
		printf("%ld -> %ld -> %ld\n", number, triangleNumber(number), numberOfDivisors);
	number++;
	}
	return 0;
}