//
//  problem9.c
//  projectEuler
//
//  Created by Антон Киселёв on 22.02.14.
//
//

#include <stdio.h>


int main()
{
	for(int i = 1; i < 1000; i++)
		for(int j = 1; j < 1000; j++)
			for(int k = 1; k < 1000; k++) {
				if(i + j + k == 1000 && i*i + j*j == k*k)
				printf("%d %d %d -> %d\n", i, j, k, i*j*k);
			}
	return 0;
}