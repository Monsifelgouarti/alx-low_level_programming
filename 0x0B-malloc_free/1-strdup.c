#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - create a space in memory contains a copy of a string
 * @str: string
 * * Return: NULL if str = NULL or if insufficient memory was available
 */
char *_strdup(char *str)
{
	int i = 0, j;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	ptr = malloc(sizeof(char) * i);

	if (ptr == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		ptr[i] = str[i];

	return (ptr);
}
