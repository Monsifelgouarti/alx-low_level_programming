#include <stddef.h>
#include "lists.h"
/**
 * listint_len -  returns the number of elements in a linked list
 * @h: linked list
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	const listint_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		len++;
		ptr = ptr->next;
	}
	return (len);
}
