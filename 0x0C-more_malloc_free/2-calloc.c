#include <stdio.h>
#include <stdlib.h>
/**
 * *_calloc - allocate memory using malloc
 * @nmemb: number of elements
 * @size: the size of each element
 * Return: a pointer of allocated memory or 
 * NULL if @nmemb or size is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
