#include <stdio.h>
/**
 * *rot13 - changes letters using rot13
 * @str: String
 * Return: string modified.
 */
char *rot13(char *str)
{
	int i = 0, j;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*(str + i))
	{
		for (j = 0; j <= 53; j++)
			if (*(str + i) == in[j])
			{
				*(str + i) = out[j];
				break;
			}
		i++;
	}

	return (str);
}
