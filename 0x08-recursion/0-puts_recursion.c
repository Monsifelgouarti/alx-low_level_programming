#include <stdio.h>
/**
 * _puts_recursion - print a string with recursion
 * @s: a strign to print
 * * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
