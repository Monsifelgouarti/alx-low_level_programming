#include <stdio.h>
/**
 * _strcmp - compares two strings
 * @s1: first String
 * @s2: second String
 * Return: integer.
 */
int _strcmp(char *s1, char *s2)
{
	int j = 0, cmp = 0;

	while (*(s1 + j) && *(s2 + j))
	{
		cmp += *(s1 + j) - *(s2 + j);
		j++;
	}

	return (cmp);
}
