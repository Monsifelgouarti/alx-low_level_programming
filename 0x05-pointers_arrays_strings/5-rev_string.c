#include <stdio.h>
/**
 * rev_string - reverse a string
 * @s: a pointer to a String
 * Return: nothing.
 */
void rev_string(char *s)
{
	int i = 0, j;
	char c;

	while (*(s + i))
	{
		i++;
	}

	for (j = 0; j < i / 2; j++)
	{
		c = *(s + j);
		*(s + j) = *(s + i - j - 1);
		*(s + i - j - 1) = c;
	}
}
