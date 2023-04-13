#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - create an array of char and initializes it with a char
 * @size: size of the array
 * @c: a char to initialize the array
 * * Return: NULL if size is 0 or if it fails.
 */
char **strtow(char *str)
{
	char **ptr;
	int nbr_word = 0, i = 0;

	if (str == NULL || str == "")
		return (NULL);

	while(str[i])
	{
		if (str[i] == ' ' && str[i + 1] != ' ')
			nbr_word++;
	}
	ptr = malloc(sizeof(char *) * nbr_word);
	
	return (ptr);
}
