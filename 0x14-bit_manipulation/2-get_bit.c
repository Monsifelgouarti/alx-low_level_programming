#include <stddef.h>
/**
 * get_bit - returns the value of a bit at a given index
 * @n: a number
 * Return: value of the bit at @index or -1;
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 31)
	{
		n >>= index;
		return (n & 1 ? 1 : 0);
	}
	return (-1);
}
