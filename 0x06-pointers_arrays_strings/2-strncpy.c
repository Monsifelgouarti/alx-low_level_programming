#include <stdio.h>
/**
 * _strncpy - copies a string
 * @dest: String that will contains copied string
 * @src: String that will be appended to @dest
 * @n: bytes from @src
 * Return: a pointer to conatinated String.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int dest_len = 0, j;

	for (j = 0; j < n && *(src + j) != '\0'; j++)
	{
		*(dest + j) = *(src + j);
	}

	*(dest + j) = '\0';

	return (dest);
}
