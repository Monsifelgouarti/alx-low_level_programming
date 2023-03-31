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

	while (*(s1 + j) != '\0' && *(s2 + j) != '\0')
	{
		if (*(s1 + j) == *(s2 + j))
		{
			j++;
			continue;
		}
		else
		{
			cmp += *(s1 + j) - *(s2 + j);
			j++;
		}
	}

	return (cmp);
}
