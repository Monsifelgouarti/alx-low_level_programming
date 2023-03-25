#include "main.h"
/**
 * print_diagonal(int)? (- print a line)
 * Description:  prints a line of '\'
 * @n: the lenght of the line.
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	for (i = 1; i <= n; i++)
	{
		_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
}
