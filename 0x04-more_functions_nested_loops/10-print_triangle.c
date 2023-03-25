#include "main.h"
/**
 * print_triangle(int)? (- print a triangle)
 * Description:  prints a triangel of '#'
 * @n: the size of the square.
 */
void print_triangle(int n)
{
	int i, j;

	if (n > 0)
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			_putchar('#');
		_putchar('\n');
	}
	_putchar('\n');
}
