#include <stdio.h>
#include <stdlib.h>
/**
 * *string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: n bytes to concatenate
 * Return: a pointer to a new space.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int lens1 = 0, lens2 = 0, i = 0, size;

	if (s1 == NULL)
		s1 = "";
	lens1 = strlen(s1);
	if (s2 == NULL)
		s2 = "";
	lens2 = strlen(s2);
	if (lens2 <= n)
		size = lens1 + lens2;
	else
		size = lens1 + n;
	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < lens1; i++)
		ptr[i] = s1[i];
	
	for (i = 0; i < size; i++)
		ptr[lens1 + i] = s2[i];
	ptr[i] = '\0';
	return (ptr);
}
