#include <stdio.h>
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: a integer
 * * Return: sqrt of @n
 */
int _sqrt_recursion(int n)
{
	int i = 2;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);

	if (n % i == 0)
	{
		n = n / i;
		return (n % i == 0 ? _sqrt_recursion(n) : (i + _sqrt_recursion(n)));
	}
	return (0);
}