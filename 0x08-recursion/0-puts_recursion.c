#include <stdio.h>
/**
 * _puts_recurtion - prints a string
 * @s: a string to print
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
