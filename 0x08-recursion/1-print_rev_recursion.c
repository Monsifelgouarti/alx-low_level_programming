#include <stdio.h>
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: a string to print
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	char c = *s;

	if (*s == '\0')
		putchar('\n');
	else
	{
		_print_rev_recursion(++s);
		putchar(c);
	}
}
