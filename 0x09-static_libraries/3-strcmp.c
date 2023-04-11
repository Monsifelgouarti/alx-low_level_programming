#include <stdio.h>
/**
 * _strcmp - compares two strings
 * @s1: first String
 * @s2: second String
 * Return: integer.
 */
int _strcmp(char *s1, char *s2)
{
	int cmp = 0;

	while (*s1 && *s2)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			break;
	}
	cmp = *s1 - *s2;

	return (cmp);
}
