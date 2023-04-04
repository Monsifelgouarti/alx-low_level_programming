#include <stdio.h>
/**
 * _memset - fills memory with a constant byte
 * @s: array of char
 * @b: char to fill s with
 * @n: n byte to fill in s
 * * Return: a pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ptr = s;

	for (i = 0; i < n; i++)
		*(ptr + i) = b;
	while (s[i])
	{
		s[i] = '\0';
		i++;
	}

	return (s);
}
