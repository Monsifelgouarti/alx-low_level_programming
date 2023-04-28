#include <stddef.h>
#include "lists.h"
/**
 * print_list -  prints all the elements of a list_t list
 * @h: list to be printed
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;
	const list_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str != NULL)
		{
			printf("[%d] ", ptr->len);
			printf("%s", ptr->str);
		}
		else
			printf("[0] (nil)");
		printf("\n");
		len++;
		ptr = ptr->next;
	}
	return (len);
}
