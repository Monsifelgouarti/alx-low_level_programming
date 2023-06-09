#include <stdio.h>
/**
 * _memcpy - copies memory area from src to dest
 * @src: array of char
 * @dest: arry of destination
 * @n: n byte to copie in dest
 * * Return: a pointer to memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
