#include <stdio.h>
/**
 * puts_half  - print every other char of a string
 * @s: a pointer to a String
 * Return: nothing.
 */
void puts_half(char *s)
{
	int i = 0, n;

	while (*(s + i))
	{
		i++;
	}

	if (i % 2 != 0)
		i++;
	n = i / 2;
	while (*(s + n) != '\0')
	{
		putchar(*(s + n));
		n++;
	}
	putchar('\n');
}
