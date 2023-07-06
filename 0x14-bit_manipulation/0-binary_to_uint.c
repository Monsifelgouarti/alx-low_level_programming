#include <stddef.h>
/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: point to a strring of 0 and 1 chars.
 * Return: converted number or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0, is_char = 0, i = 0, j;
	unsigned int num = 0, tmp;

	if (b == NULL)
		return (num);
	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			is_char = 1;
		len++;
	}
	if (is_char == 1)
		return (num);
	for (i = len - 1; i >= 0; i--)
	{
		if (i == (len - 1) && b[i] == '1')
			num = 1;
		else if (b[i] == '1')
		{
			tmp = 1;
			for (j = 1; j < (len - i); j++)
				tmp = tmp * 2;
			num += tmp;
		}
	}
	return (num);
}
