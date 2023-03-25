#include "main.h"
/**
 * print_square(int)? (- print a square)
 * Description:  prints a square of '#'
 * @n: the size of the square.
 */
void print_square(int n)
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
