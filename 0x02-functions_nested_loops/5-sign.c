#include "main.h"
/**
 * print_sign(int n)? (- print sign)
 * Description: print sign of a given number,
 * @n: a number
 * Return: 1 if n is greater than 0
 * 0 if n is zero
 * -1 if n is less than zero
 */
int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		_putchar('+');
		i = 1;
	}
	if (n == 0)
	{
		_putchar(0 + '0');
		i = 0;
	}
	if (n < 0)
	{
		_putchar('-');
		i = -1;
	}
	return (i);
}
