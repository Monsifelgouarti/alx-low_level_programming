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
		for(int = i; i <=98; i++)
		{
			printf("%d", i);
			if (i < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	else
		for (int i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i > 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
}
