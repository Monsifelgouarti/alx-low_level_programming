#include <stdio.h>
/**
 * factorial - returns the factorial of a given number
 * @n: a number
 * Return: the factorial of @n
 */
int factorial(int n)
{

	if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
