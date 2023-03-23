#include "main.h"
/**
 * _islower(int c)? (- check for lowercase)
 * Description: checks for lowercase character,
 * @c: a character to test
 * Return: 1 if c is lowercase
 * Return: 0 otherwise
 */
void _islower(int c)
{
	int i, j = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			j = 1;
	}
	return (j);
}
