#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print strings
 * @separator: the string to be printed between strings
 * @n: number of optional args passed to the function
 * * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	if (n != 0)
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			str = va_arg(ap, char*);
			if (str != NULL)
				printf("%s", str);
			else
				printf("(nil)");
			if (separator != NULL && i < n - 1)
				printf("%s", separator);
		}
		va_end(ap);
	}
	printf("\n");
}
