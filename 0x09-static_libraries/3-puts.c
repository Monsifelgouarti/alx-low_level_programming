#include <stdio.h>
/**
 * _puts  - print a string
 * @s: a pointer to a String
 * Return: nothing.
 */
void _puts(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		putchar(*(s + i));
		i++;
	}
	putchar('\n');
}
