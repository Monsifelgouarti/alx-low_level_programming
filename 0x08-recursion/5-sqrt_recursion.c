#include <stdio.h>
int sqrt_root(int n, int y);
/**
 * _sqrt_recursion -  the natural sqrt root of a number.
 * @n: a number
 * Return: sqrt root of @n or -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	else
		return (sqrt_root(n, 1));
}
/**
 * sqrt_root - test if @y is a sqrt root to @n.
 * @n: a number
 * @y: a number
 * Return: sqrt root of @n or -1.
 */
int sqrt_root(int n, int y)
{
	if (y >= n)
		return (-1);
	if (n == (y * y))
		return (y);
	else
		return (sqrt_root(n, y + 1));
}
