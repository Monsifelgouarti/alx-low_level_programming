#include <stdio.h>
/**
 * puts2  - print every other char of a string
 * @s: a pointer to a String
 * Return: nothing.
 */
void puts2(char *s)
{
	int i = 0, j;

	if (*s != "")
	{
	while (*(s + i) != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j += 2)
		putchar(*(s + j));
	}
	putchar('\n');
}
