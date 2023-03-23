#include "main.h"
/**
 * print_last_digit(int n)? (- print last digit)
 * Description: print the last digit of a Number
 * @n: a number
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	n = n % 10;
	return (n);
}
