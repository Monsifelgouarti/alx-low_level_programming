#include "main.h"
/**
 * print_alphabet(void)? (- print alphabet)
 * Description: prints the alphabet, in lowercase, 10 times
 * followed by a new line.
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i, j;
	
	for (j = 0; j < 10; j++)
	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
