//
//  problem14.c
//  projectEuler
//
//  Created by Антон Киселёв on 23.02.14.
//
//

#include <stdio.h>

long int next(long int number) {
	if(number % 2 == 1)
		return 3 * number + 1;
	else
		return number / 2;
}

long int sequenceLength(long int number) {
	long int length = 1;
	long int nextNumber = next(number);
	while(1) {
		length++;
		nextNumber = next(nextNumber);
		if(nextNumber == 1) {
			length++;
			break;
		}
	}
	return length;
}


int main()
{
	/*
	The following iterative sequence is defined for the set of positive integers:

	n → n/2 (n is even)
	n → 3n + 1 (n is odd)

	Using the rule above and starting with 13, we generate the following sequence:

	13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
	It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

	Which starting number, under one million, produces the longest chain?

	NOTE: Once the chain starts the terms are allowed to go above one million.
	*/

	long int biggestLength = 0;
	long int biggestNumber = 1;
	for (long int i = 1; i <= 1000000; i++) {
		long int length = sequenceLength(i);
		if (length > biggestLength){
			biggestNumber = i;
			biggestLength = length;
			printf("The number is %ld, the length is %ld\n", biggestNumber, biggestLength);
		}
	}

	printf("The number is %ld, the length is %ld\n", biggestNumber, biggestLength);

	return 0;
}