#include <stdio.h>
/**
 * *create_array - create an array of char and initializes it with a char
 * @size: size of the array
 * @c: a char to initialize the array
 * * Return: NULL if size is 0 or if it fails.
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *ptr;

	if (size <= 0)
	       return (NULL);
	ptr = malloc(sizeof(char) * size);
	
	if (ptr == NULL)
		return (NULL);
	else
	{
		for (i = 0; i < size; i++)
			ptr[i] = c;
	}
	return (ptr);
}
