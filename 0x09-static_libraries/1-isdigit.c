#include "main.h"
/**
 * _isdigit(int c)? (- checks if digit)
 * Description: checks if a given character is a digit
 * @c: a digit
 * Return: 1 if @c is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	int ret_val = 0;

		if (c >= 48 && c <= 57)
			ret_val = 1;
	return (ret_val);
}
