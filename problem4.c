//
//  problem4.c
//  projectEuler
//
//  Created by Антон Киселёв on 22.02.14.
//
//

#include <stdio.h>

int ipow(int base, int exp)
{
    int result = 1;
    while (exp)
    {
        if (exp & 1)
            result *= base;
        exp >>= 1;
        base *= base;
    }

    return result;
}

int numberLength(int number) {
	int length = 0;
	int n = number;

	while(n != 0) {
		length++;
		n = n / 10;
	}

	return length;
}

int digitOnNthPosition(int number, int position) {
	return (number % ipow (10, position)) / ipow(10, position - 1);
}

int isPalindrome(int number) {
	int length = numberLength(number);
	int result = 1;
	for(int i = 1; i <= length / 2; i++) {
		if(digitOnNthPosition(number, i) != digitOnNthPosition(number, length + 1 - i)) {
					result = 0;
					break;
		}
	}
	return result;
}

int main()
{
	/*  Bugged results so far:
	 *	3433
	 *
	 */
	int largestPalindrome = 0;

	for(int i = 100; i < 1000; i++) {
		for(int j = 100; j < 1000; j++) {
			int product = i*j;
			if(product > largestPalindrome && isPalindrome(product))
				largestPalindrome = product;
		}
	}

	printf("%d\n", largestPalindrome);	
	return 0;
}
