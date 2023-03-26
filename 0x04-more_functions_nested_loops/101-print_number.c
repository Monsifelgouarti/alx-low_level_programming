#include "main.h"
/**
 * print_number(int)? (- print integer)
 * Description:  print a number
 * @n: number to print
 */
void print_number(int n)
{
	int res;

	res = n / 10;
	if (n >= 0)
	{
	if (n >= 10)
	{
		print_number(res);
		_putchar((n % 10) + '0');
	}
	else
		_putchar(n + '0');
	}
	else
	{
		n = n * -1;
		if (n >= 10)
		{
			print_number(n / 10);
			_putchar((n % 10) + '0')
		}
		else
		{
			_putchar('-');
			_putchar(n + '0');
		}
	}
}
