#include <stdio.h>
#include <stdlib.h>
/**
 * *array_range - create an array of integers
 * @min: min value of the integers.
 * @max: max value of the integers.
 * Return: a pointer to the new array or NULL if min > max or it fails.
 */
int *array_range(int min, int max)
{
	int *ptr, size = 0, i;

	if (min > max)
		return (NULL);

		size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = min + i;
	return (ptr);
}
