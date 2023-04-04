#include <stdio.h>
/**
 * _strpbrk - Locate the first occurence in s
 * of any of bytes of accept
 * @s: array of char
 * @accept: substring
 * * Return: a pointer to bytes of first occurence
 */
char *_strpbrk(char *s, char *accept)
{
	char *first_Oc = NULL;
	int i = 0, j;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				first_Oc = &s[i];
				break;
			}
			j++;
		}
		if (first_Oc != NULL)
			break;
		i++;
	}
	return (first_Oc);
}
