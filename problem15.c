#include "stdio.h"

const long int DIMENSION = 21;

int main()
{
	long int matrix[DIMENSION][DIMENSION];
	for(long int i = 0; i < DIMENSION; ++i)
		for(long int j = 0; j < DIMENSION; ++j)
			matrix[i][j] = 0;

	for(long int i = 0; i < DIMENSION; ++i) {
		matrix[i][0] = 1;
		matrix[0][i] = 1;
	}

	for(long int i = 1; i < DIMENSION; ++i)
		for(long int j = 1; j < DIMENSION; ++j)
			matrix[i][j] = matrix[i-1][j] + matrix[i][j-1];

	printf("%ld\n", matrix[DIMENSION - 1][DIMENSION - 1]);

	return 0;
}