#include <stdio.h>
/**
 * _print_rev_recursion - print a string in reverse with recursion
 * @s: a strign to print
 * * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0' || s == 0)
	{
		return;
	}
	else
	{
		s++;
		_print_rev_recursion(s);
		putchar(*s);
	}
}
