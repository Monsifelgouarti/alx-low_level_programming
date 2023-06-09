#include "main.h"
/**
 * _abs(int n)? (- absolute value)
 * Description: print the absolute value of an integer
 * @n: a number
 * Return: the absolute value of the argument
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
