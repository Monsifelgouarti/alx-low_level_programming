#include "main.h"

/**
 * main(void)? (- print _putchar)
 * Description:prints _putchar, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
