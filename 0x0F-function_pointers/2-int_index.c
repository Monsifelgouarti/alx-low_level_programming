#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - a function that searches for an integer
 * @array: array of intiger
 * @size: size of the array
 * @cmp: a pointer to the function to compare values
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]) != 0)
				return (index);
		}
	}
	return (-1);
}
