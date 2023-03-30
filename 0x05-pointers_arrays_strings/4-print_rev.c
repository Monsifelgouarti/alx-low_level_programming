#include <stdio.h>
/**
 *  print_rev - print a string in reverse
 * @s: a pointer to a String
 * Return: nothing.
 */
void print_rev(char *s)
{
	int i = 0, j;

	while (*(s + i))
	{
		i++;
	}

	for (j = i - 1; j >= 0; j--)
		putchar(*(s + j));

	putchar('\n');
}
