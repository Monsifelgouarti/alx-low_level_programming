#include <stdio.h>
/**
 * *print_number - print numbers with putchar
 * @n: Integer
 * Return: nothing.
 */
void print_number(int n)
{
	int res;

	if (n >= 0)
	{
		if (n >= 10)
		{
			res = n / 10;
			print_number(res);
			_putchar(n % 10 + '0');
		}
		else
			_putchar(n % 10 + '0');
	}
	else
	{
		if (n > -10)
			_putchar(n % 10);
		else
		{
			res = n / 10;
			print_number(res);
			_putchar(((n % 10) * -1) + '0');
		}

	}
}
