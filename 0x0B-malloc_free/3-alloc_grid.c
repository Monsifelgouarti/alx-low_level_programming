#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers..
 * @width: width of the grid
 * @height: height of the grid
 * * Return: NULL if str = NULL or if insufficient memory was available
 */
int **alloc_grid(int width, int height)
{
	int i, **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * width);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		ptr[i] = malloc(sizeof(int) * height);

	return (ptr);
}

