#include "main.h"
/**
 * print_diagonal(int)? (- print a line)
 * Description:  prints a line of '\'
 * @n: the lenght of the line.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
			_putchar(' ');
		_putchar('\\');
	}
	_putchar('\n');
}
