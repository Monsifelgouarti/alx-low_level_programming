#include <stdio.h>
/**
 * _strncat - concatenates a string to another
 * @dest: String that wiil contais concatinated strings
 * @src: String that will be appended to @dest
 * @n: bytes from @src
 * Return: a pointer to conatinated String.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, j;

	while (*(dest + dest_len))
	{
		dest_len++;
	}

	for (j = 0; j <= n && *(src + j); j++)
	{
		*(dest + dest_len + j) = *(src + j);
	}

	return (dest);
}
