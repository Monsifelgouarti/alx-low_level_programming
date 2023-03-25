#include "main.h"
/**
 * int _isupper(int c); (- checks for upperrecase character)
 * Description: checks if a given character is an uppercase
 * @c: a character
 * Return: 1 if @c is an uuppercase and 0 otherwise
 */
int _isupper(int c)
{
	int i, ret_val = 0;

	for (i = 'A'; i <= 'Z'; i++)
		if (i == c)
			ret_val = 1;
	return (ret_val);
}
