//
//  problem17.c
//  projectEuler
//
//  Created by Антон Киселёв on 27.02.14.
//
//

#include <stdio.h>


int unitsHandler(int units) {
	if(units = 1 || units = 2 || units = 6 || units = )
}

long int countLetters(int number) {
	/*
	one, two, six, ten - 3
	three, seven, eigth - 5
	four, five, nine - 4

	eleven, twelve - 6
	thirteen, fourteen, nineteen, fiveteen - 8
	sixteen - 7
	seventeen, eigthteen - 9

	twenty, thirty, fourty, eighty, ninety - 6
	fifty, sixty - 5
	seventy - 7

	hundred - 7
	*/

	int hundreds = number / 100;
	int dozens = (number / 10) % 10;
	int units = number % 10;
	if (hundreds != 0)
	{
		
	}


}

int main() {
	long int result = 0;
	for(int i = 1; i < 1000; i++) {
		int currentLetters = countLetters(i);
		result += currentLetters;
	}
	printf("%ld\n", result);
}