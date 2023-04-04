#include <stdio.h>
/**
 * _strchr - locate a charter in a string
 * @s: array of char
 * @c: char to locate
 * * Return: a pointer tosccurence of c
 */
char *_strchr(char *s, char c)
{
	char *p = NULL;
	int i = 0;

	while (s[i])
	{
		if (*(s + i) == c)
		{
			p = &*(s + i);
			break;
		}
		i++;
	}
	if (p == NULL && c == '\0')
		p = &s[i];

	return (p);
}
