#include <stdio.h>
/**
 * *cap_string - changes first letter of each word
 * @str: String
 * Return: string of uppercase.
 */
char *cap_string(char *str)
{
	int i = 0;
	char c;

	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (c == ' ' || c == '\n' || c == '\t' || c == ',' || c == ';'
			|| c == '.' || c == '!' || c == '?' || c == '"'
			|| c == '(' || c == ')' || c == '{' || c == '}')
			if (*(str + i + 1) >= 'a' && *(str + i + 1) <= 'z')
			*(str + i + 1) = *(str + i + 1) - 32;

		i++;
	}

	return (str);
}
