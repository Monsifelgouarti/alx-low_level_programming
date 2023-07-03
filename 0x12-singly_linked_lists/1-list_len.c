#include <stddef.h>
#include "lists.h"
/**
 * list_len -  returns the number of elements in a linked list
 * @h: linked list
 * Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;
	const list_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		len++;
		ptr = ptr->next;
	}
	return (len);
}
