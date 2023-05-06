#include <stddef.h>
/**
 * flip_bits - flip bits to get from one number to another
 * @n: the first number
 * @m: the second number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nb = 0;
	int i;

	for (i = 0; i < 64; i++)
	{
		if ((n & 1) != (m & 1))
			nb++;
		n >>= 1;
		m >>= 1;
	}
	return (nb);
}
