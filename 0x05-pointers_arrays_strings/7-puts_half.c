#include <stdio.h>
/**
 * puts_half  - print every other char of a string
 * @s: a pointer to a String
 * Return: nothing.
 */
void puts_half(char *s)
{
	int i = 0, j, n;

	while (*(s + i))
	{
		i++;
	}

	if (i % 2 != 0)
		i--;
	n = i / 2;
	for (j = n ; j < i + 1; j++)
		putchar(*(s + j));
	putchar('\n');
}
