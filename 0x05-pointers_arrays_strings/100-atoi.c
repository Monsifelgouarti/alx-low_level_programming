#include <stdio.h>
/**
 *  _atoi - convert a string to an integer
 * @s: a pointer to a string
 * Return: integer or 0 otherwise.
 */
int _atoi(char *s)
{
	int i = 0, signe = 0, count = 0, num = 0, pow, j;
	char *c = NULL;

	while (s[i])
	{
		if ((s[i] == '-') && (s[i + 1] >= 48 && s[i + 1] <= 57))
		{
			signe = 1;
			c = &s[i + 1];
		}
		if ((s[i] >= 48 && s[i] <= 57))
		{
			count++;
			if (c == NULL)
				c = &s[i];
		}
		if (!(s[i] >= 48 && s[i] <= 57) && count != 0)
			break;
		i++;
	}
	if (count != 0)
	{
		for (i = count; i > 0; i--)
		{
			pow = *c - 48;
			for (j = 1; j < i; j++)
				pow *= 10;
			num += pow;
			c++;
		}
		if (signe == 1)
			return (-num);
		else
			return (num);
	}
	else
		return (0);
}
