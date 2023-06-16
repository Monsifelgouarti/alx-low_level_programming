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
	unsigned int lens1 = 0, lens2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	while (s1[lens1])
		lens1++;
	if (s2 == NULL)
		s2 = "";
	while (s2[lens2])
		lens2++;
	if (n >= lens2)
		n = lens2;

	ptr = malloc(sizeof(char) * (lens1 + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < lens1; i++)
		ptr[i] = s1[i];
	ptr[i] = '\0';
	for (j = 0; j < n; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';
	return (ptr);
}
