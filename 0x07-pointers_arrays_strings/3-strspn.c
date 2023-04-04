#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: array of char
 * @accept: substring
 * * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int *len = 0;
	int i = 0, j;

	while (accept[i])
	{
		j = 0;
		while (s[j])
		{
			if (s[j] == accept[i])
			{
				len++;
				break;
			}
			j++;
		}
		i++;
	}
	return (++len);
}
