#include <stdio.h>
/**
 * *leet - changes "aAeEoOlLtT" with equivalent "4433001177"
 * @str: String
 * Return: string modified.
 */
char *leet(char *str)
{
	int i = 0, j;
	char leet[] = "aAeEoOlLtT", num[] = "4433001177";

	while (*(str + i))
	{
		for (j = 0; j <= 9; j++)
			if (*(str + i) == leet[j])
				*(str + i) = num[j];
		i++;
	}

	return (str);
}
