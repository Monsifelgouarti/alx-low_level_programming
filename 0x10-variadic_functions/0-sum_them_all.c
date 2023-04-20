#include <stdio.h>
/**
 * sum_them_all - print the sum of all the optional args passed
 * @n: number of optional args passed to the function
 * * Return: nothing
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
