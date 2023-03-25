#include "main.h"
/**
 * print_triangle(int)? (- print a triangle)
 * Description:  prints a triangel of '#'
 * @n: the size of the triangle.
 */
void print_triangle(int n)
{
	int i = 1, j, k;

	if (n > 0)
	while (i <= n)
	{
		for (j = (n - i); j >= 1; j--)
			_putchar(' ');
		for (k = 1; k <= i; k++)
			_putchar('#');
		_putchar('\n');
		i++;
	}
	else
		_putchar('\n');
}
