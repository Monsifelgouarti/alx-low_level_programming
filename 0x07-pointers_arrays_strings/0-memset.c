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
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
