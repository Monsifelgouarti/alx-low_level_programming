#include <stddef.h>
/**
 *clear_bit - set the value of a bit to 1 at a given index
 * @n: a number
 * @index: index of bit to set
 * Return: 1 if it worked or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 63)
	{
		*n &= ~(1 << index);
		return (1);
	}
	return (-1);
}
