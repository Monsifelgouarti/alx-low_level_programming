#include <stdio.h>
/**
 * print_diagsums - print sums of diag of a matrix
 * @a: a matrix of integers
 * size: size of matrix
 * * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j, diagsums = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			if ( i == j)
				diagsums += a[j];
		printf("%d, ",diagsums);
		a++;
	}

	for (i = size - 1;i >= 0; i--)
	{
		for (j = size - 1; j >= 0; j--)
			if ( i == j)
				diagsums += a[j];
		a--;
	}
		printf("%d\n",diagsums);
	

}
