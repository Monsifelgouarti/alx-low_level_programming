#include <stdio.h>
#include <stddef.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: a number to print in binary
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	printf("%ld", n & 1);
}
