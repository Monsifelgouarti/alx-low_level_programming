#include <stdio.h>
/**
 * _puts_recursion - prints a string
 * @s: a string to print
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		putchar('\n');
}
