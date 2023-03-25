#include "main.h"
/**
 * print_line(int)? (- print a line)
 * Description:  prints a line of '_'
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
