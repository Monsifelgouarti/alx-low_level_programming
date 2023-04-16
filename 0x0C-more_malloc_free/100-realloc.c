#include <stdio.h>
#include <stdlib.h>
/**
 * *_realloc - reallocate memory block using malloc and free
 * @ptr: pointer to be reallocated.
 * @old_size: the size of ptr.
 * @new_size: new size to be allocated.
 * * Return: a pointer to the new allocated memory or NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *p1;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p1 = ptr;
	if (new_size > old_size)
	{
		p = malloc(sizeof(char) * new_size);
		for (i = 0; i < old_size; i++)
			p[i] = p1[i];
		free(ptr);
		free(p1);
		ptr = p;
		return (ptr);
	}
	return (ptr);
}
