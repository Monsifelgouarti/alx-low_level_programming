#include <stdio.h>
#include "main.h"
/**
 * print_to_98(int n)? (- print numbers)
 * Description: print Numbers form a given n to 98
 * @n: a number
 * Return: 0
 */
void print_to_98(int n)
{
	do {
		printf("%d", n);
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		if (n <= 98)
			n++;
		else
			n--;
	} while (n != 98);
}
