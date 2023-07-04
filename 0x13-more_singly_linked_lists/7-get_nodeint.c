#include <stddef.h>
#include "lists.h"
/**
 * get_nodeint_at_index -  returns the nth elements in a linked list
 * @head: linked list
 * @index: index of node to return.
 * Return: node at index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr;

	ptr = head;
	while (ptr != NULL && i < index)
	{
		i++;
		ptr = ptr->next;
	}
	if (i < index)
		return (NULL);
	if (i == index)
		return (ptr);
	return (NULL);
}
