#include <stdio.h>
/**
 * *rot13 - changes letters using rot13
 * @str: String
 * Return: string modified.
 */
char *rot(char *str)
{
	int i = 0, j;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*(str + i))
	{
		for (j = 0; j <= 52; j++)
			if (*(str + i) == leet[j])
				*(str + i) = num[j];
		i++;
	}

	return (str);
}
