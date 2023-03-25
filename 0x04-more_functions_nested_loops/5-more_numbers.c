#include "main.h"
/**
 * more_numbers(void)? (- print numbers)
 * Description:  prints the numbers, from 0 to 14
 * 10 times, followed by a new line.
 */
void print_most_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
		for (j = 0; j <= 14; j++)
			_putchar(j + '0');
	_putchar('\n');
}
