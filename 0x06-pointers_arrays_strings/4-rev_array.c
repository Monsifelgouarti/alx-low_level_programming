#include <stdio.h>
/**
 * reverse_array - reverse an array of integer
 * @a: a pointer to an array of integer
 * @n: is the number of elements of the array
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, rev, k = 0;

	i = n - 1;
	for (k = 0; k < n / 2; k++)
	{
		rev = *(a + i);
		*(a + i) = *(a + k);
		*(a + k) = rev;
		i--;
	}
}
