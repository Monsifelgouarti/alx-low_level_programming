#include "main.h"
/**
 * main(void)? - print alphabet
 * Description: prints the alphabet, in lowercase,
 *  followed by a new line, with function print_alphabet
 *  Return: 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet(void)? - print alphabet
 * Description: prints the alphabet, in lowercase,
 * followed by a new line.
 * Return: 0
 */
void print_alphabet(void)
{
	int i;
	for (i = 'a'; i <= 'z'; i++)
	_putchar(i);
	_putchar('\n');
}
