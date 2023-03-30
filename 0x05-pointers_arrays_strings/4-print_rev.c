#include <stdio.h>
/**
 *  print_rev - print a string in reverse
 * @s: a pointer to a String
 * Return: nothing.
 */
void print_rev(char *s)
{
	int i = 0, j;

	while (*(s + i) != '\0')
	{
		i++;
	}
	for (j = i; j >= 0; j++)
		putchar(*(s + j));
	putchar('\n');
}
