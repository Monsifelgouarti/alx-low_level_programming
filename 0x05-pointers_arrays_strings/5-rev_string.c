#include <stdio.h>
/**
 * rev_string - reverse a string
 * @s: a pointer to a String
 * Return: nothing.
 */
void rev_string(char *s)
{
	int i = 0, j, k = 0;
	char c;

	while (*(s + i))
	{
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		c = *(s + j);
		*(s + j) = *(s + k);
		*(s + k) = c;
		k++;
	}
}
