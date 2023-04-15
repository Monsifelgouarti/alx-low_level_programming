#include <stdio.h>
#include <stdlib.h>
/**
 * *malloc_checked - allocate memory using malloc
 * @b: unsigned integer
 * Return: a pointer of allocated memory or 98 if it fails.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		return (98);
	else
		return (ptr);
}
