#include <stdio.h>
/**
 * *string_toupper - changes lowercase letters to uppercase of a string
 * @str: String
 * Return: string of uppercase.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z' && *(str + i) != '\n')
		*(str + i) = *(str + i) - 32;
		i++;
	}

	return (str);
}
