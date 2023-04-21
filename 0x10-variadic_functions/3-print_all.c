#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
/**
 * print_all - prints anything
 * @format:a list of types of arguments passed to the function
 * * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j;
	char *str;

	va_start(ap, format);
	while (format[i] && format != NULL)
	{
		j = 0;
		switch (format[i])
		{
			case 's':
				str = va_arg(ap, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			default:
				j = 1;
				break;
		}
		i++;
		if (format[i] != '\0' && j == 0)
			printf(", ");
		}
		printf("\n");
		va_end(ap);
}
