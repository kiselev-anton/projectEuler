//
//  firstTask.c
//  projectEuler
//
//  Created by Антон Киселёв on 22.02.14.
//
//

#include <stdio.h>

int main()
{
	int sum = 0;
	for(int i = 0; i < 1000; i++) {
		if(i % 3 == 0 || i % 5 == 0) {
			sum += i;
			printf("%d %d\n", i, sum);
		}
	}
	printf("%d\n", sum);
	return 0;
}