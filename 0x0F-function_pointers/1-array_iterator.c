#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - a function that execute a function given as a parameter
 * @array: array of intiger
 * @size: size of the array
 * @action: a pointer to the function to use
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
