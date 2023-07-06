#include <stdio.h>
#include <stddef.h>
/**
 * get_endianness - checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int i = 1;
	char *c;

	c = (char *) &i;
	if (*c)
		return (1);
	return (0);
}
