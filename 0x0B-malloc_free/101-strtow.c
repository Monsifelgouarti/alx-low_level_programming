#include <stdio.h>
#include <stdlib.h>
/**
 * **strtow - split string to words
 * @str: a string to split
 * * Return: words or NULL if str is NULL 0 or if it fails.
 */
char **strtow(char *str)
{
	char **ptr;
	int nbr_word = 0, i = 0;

	if (str == NULL || str)
		return (NULL);

	while (str[i])
	{
		if (str[i] == ' ' && str[i + 1] != ' ')
			nbr_word++;
	}
	ptr = malloc(sizeof(char *) * nbr_word);

	return (ptr);
}
