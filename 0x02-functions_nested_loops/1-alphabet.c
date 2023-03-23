#include "main.h"
/**
 * print_alphabet(void)? - print alphabet
 * Description: prints the alphabet, in lowercase,
 *  followed by a new line.
 *  Return: 0
 */
void print_alphabet(void)
{
	int i;
	for (i = 'a'; i <= 'z'; i++)
	_putchart(i);
	_putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
