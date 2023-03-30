#include <stdio.h>
/**
 * _strcat - appends a string to another
 * @dest: String that wiil contais concatinated strings
 * @src: String that will be appended to @dest
 * Return: a pointer to conatinated String.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0, j, src_len = 0, k = 0;

	while (*(dest + dest_len))
	{
		dest_len++;
	}

	while (*(src + src_len))
	{
		src_len++;
	}

	for (j = dest_len - 1; j <= (dest_len + src_len - 1); j++)
	{
		*(dest + j) = *(src + k);
		k++;
	}
	*(dest + k + 1) = '0';

	return (dest);
}
