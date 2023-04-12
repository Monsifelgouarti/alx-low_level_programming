#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings.
 * @s1: string
 * @s2: string
 * * Return: NULL if str = NULL or if insufficient memory was available
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j, len = 0, k = 0;
	char *ptr;

	if (s1 == NULL && s2 == NULL)
	{
		ptr = malloc(sizeof(char));
		ptr[0] = '\0';
		return (ptr);
	}
	if (s1 == NULL && s2 != NULL)
		return (s2);
	if (s2 == NULL && s1 != NULL)
		return (s1);
	while (s1[len])
		len++;

	while (s2[i])
		i++;

	ptr = malloc(sizeof(char) * (i + len + 1));

	if (ptr == NULL)
		return (NULL);

	for (j = 0; j < len; j++)
		ptr[j] = s1[j];
	for (j = len; j < (len + i); j++)
	{
		ptr[j] = s2[k];
		k++;
	}
	ptr[j] = '\0';

	return (ptr);
}
