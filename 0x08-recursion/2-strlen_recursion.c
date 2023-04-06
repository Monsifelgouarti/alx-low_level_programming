#include <stdio.h>
/**
 * _strlen_recursion - return the lengthof @s with recursion
 * @s: a strign to find legth
 * * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s++));
	}
	else
		return (0);
}
