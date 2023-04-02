#include <stdio.h>
/**
 * puts2  - print every other char of a string
 * @s: a pointer to a String
 * Return: nothing.
 */
void puts2(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		putchar(*(s + i));
		i+= 2;
	}
	putchar('\n');
}
