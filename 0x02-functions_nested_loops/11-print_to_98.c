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
	if (n <= 98)
		do {
			printf("%d,", n);
			if (n != 98)
			_putchar(' ');
			n++;
		} while (n <= 98);
	else
		do {
			printf("%d,", n);
			if (n != 98)
			_putchar(' ');
			n--;
		} while (n >= 98);
}
