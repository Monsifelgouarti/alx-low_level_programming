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

	for (i = n - 1; i >= 0; i--)
	{
		rev = *(a + i);
		*(a + i) = *(a + k);
		*(a + k) = rev;
		k++;
	}
}
