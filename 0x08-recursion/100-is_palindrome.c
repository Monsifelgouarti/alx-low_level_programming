#include "string.h"
int palindrome(char *s, int y);
/**
 * is_palindrome - reurn 1 if the string is a palindrome
 * @s: a string
 * Return: 1 if @n is a prime number or 0.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (palindrome(s, 1));
}
/**
 * prime_number - test if the char inthe begining equal the char at the end.
 * @s: a string
 * @y: a number
 * Return: 0 if not match 1 if all chars match.
 */
int palindrome(char *s, int y)
{
	int i = strlen(s);

	if (*(s + y) == '\0')
		return (1);
	if (*s == *(s + i - y))
	{
		s++;
		return (palindrome(s, y + 1));
	}
	else
		return (0);
}
