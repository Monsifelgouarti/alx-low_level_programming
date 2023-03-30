#include <stdio.h>
/**
 * rev_string - reverse a string
 * @s: a pointer to a String
 * Return: nothing.
 */
void rev_string(char *s)
{
	char rev_s[] = s;
	int i = 0, j, k = 0;

	while (*(s + i))
	{
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		*(rev_s + k) = *(s + j);
		k++;
	}
	*s = *rev_s;
}
