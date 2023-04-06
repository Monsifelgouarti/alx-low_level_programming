#include <stdio.h>
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: a integer
 * * Return: sqrt of @n
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	if (n < 0)
		return (-1);
	if ((n % 2) == 0)
		return (1);
	else
	{
		n = n / 2;
		_sqrt_recursion(n);
	}
}
