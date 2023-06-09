#include "main.h"
/**
 * _isalpha(int c)? (- check for alphabetic)
 * Description: checks for alphabetic character,
 * @c: a character to test
 * Return: 1 if c is alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
	int i, j = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			j = 1;
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			j = 1;
	}
	return (j);
}
