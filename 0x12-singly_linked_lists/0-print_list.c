#include <stddef.h>
/**
 * print_list -  prints all the elements of a list_t list
 * @h: list to be printed
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;
	unsigned int i;
	list_t *ptr;
	char nil[] = "(nil)";

	ptr = h;
	while (ptr->next)
	{
		if (ptr->str != NULL)
		{
			_putchar('[');
			_putchar(len + '0');
			_putchar(']');
			_putchar(' ');
			for (i = 0; i < ptr->len; i++)
				_putchar(ptr->str[i]);
		}
		else
		{
			_putchar('[');
			_putchar(0 + '0');
			_putchar(']');
			_putchar(' ');
			for (i = 0; i < 5; i++)
				_putchar(nil[i]);
		}
		_putchar('\n');
		len++;
		ptr = ptr->next;
	}
	return (len);
}
