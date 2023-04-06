#include <stdio.h>
/**
 * _pow_recursion - returns the value of number rised to y power
 * @x: a integer
 * @y: the power to be rised to
 * * Return: @x rised to power of @y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
