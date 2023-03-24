#include "main.h"
/**
 * print_times_table(int n);? (- print n times table)
 * Description: print n times table starting with 0
 * @n: base number to print a table
 * Return: 0
 */
void print_times_table(int n)
{
	int i, j, res;

	if (n <= 15 && n >= 0)
	{
	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			res = i * j;
			_putchar(',');
			_putchar(' ');
			if (res < 10)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else if (res >= 10 && res < 100)
			{
				_putchar(' ');
				_putchar((res / 10) + '0');
			}
			else
			{
				_putchar((res / 100) + '0');
				res = res - 100;
				_putchar((res / 10) + '0');
			}
			_putchar((res % 10) + '0');
		}
		_putchar('\n');
	}
	}
}
