#include <stdio.h>
/**
 * _strstr - Locate the first occurence in s
 * of any of a substring
 * @haystack: array of char
 * @needle: substring
 * * Return: a pointer to bytes of first occurence
 */
char *_strstr(char *haystack, char *needle)
{
	char *first = NULL;
	int i = 0, j, found;

	while (haystack[i])
	{
		j = 0;
		found = 0;
		if(haystack[i] == needle[j])
		{
		while (needle[j])
		{
			if (needle[j] == haystack[i + j])
			{
				first = haystack[i];
				found = 1;
				j++;
			}
			else
			{
				found = 0;
				break;
			}
		}
		
		if (found == 1)
			break;
		}
		i++;
	}
	return (first);
}
