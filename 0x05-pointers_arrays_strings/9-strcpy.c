#include <stdio.h>
/**
 *  _strcpy - copy a string src to a buffer dest
 * @src: a pointer to a string
 * @dest: buffer reciving copies of src
 * Return: @dest.
 */
void *_strcpy(char *dest, char *src)
{
	int i, len = 0;

	while (src[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
		dest[i] = src[i];

	while (dest[i])
		dest[i] = '\0';

	return (dest);
}
