#include <stdio.h>
/**
 * print_diagsums - print sums of diag of a matrix
 * @a: a matrix of integers
 * @size: size of matrix
 * * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, diagsums = 0, *p;

	p = a;
	for (i = 0; i < size; i++)
	{
		diagsums += a[j];
		a += size;
	}
	
	printf("%d, ",diagsums);

	diagsums = 0;
	
	for (i = 0; i < size; i++)
	{
		p += size - 1;
		diagsums += a[j];
	}

	printf("%d\n",diagsums);
}
