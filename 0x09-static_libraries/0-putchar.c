#include "main.h"
#include <unistd.h>
/**
 * _putchar - print a char @c
 * @c: a char to print
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
