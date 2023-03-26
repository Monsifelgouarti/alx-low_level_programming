#include "main.h"
/**
 * print_number(int)? (- print integer)
 * Description:  print a number 
 * @n: number to print
 */
void print_number(int n)
{
	int res;

	res = n / 10;
	if (n >= 10)
		print_number(res);
	else
		_putchar(n + '0');
}
