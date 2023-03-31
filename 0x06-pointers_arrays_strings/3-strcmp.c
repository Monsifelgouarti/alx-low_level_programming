#include <stdio.h>
/**
 * _strcmp - compares two strings
 * @s1: first String
 * @s2: second String
 * Return: integer.
 */
int _strcmp(char *s1, char *s2)
{
	int j = 0, i, cmp;

	while (*(s1 + j))
		j++;

	for (i = 0; i <= j && *(s1 + i) != '\0'; i++)
	{
		cmp = *(s1 + i) - *(s2 +i);
	}

	return (cmp);
}
