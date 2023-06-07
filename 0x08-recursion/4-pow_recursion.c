#include <stdio.h>
/**
 * _pow_recursion -  the value of @x raised to the power of @y.
 * @x: a number
 * @y: the power of @x
 * Return: @x power @y or -1.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 1)
		return (x);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, (y - 1)));
}
