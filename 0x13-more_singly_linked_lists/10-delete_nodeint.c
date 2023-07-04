#include <stddef.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - insert a node at nth index in a linked list
 * @head: linked list
 * @index: index to delet a new node.
 * Return:address of the new node or NULL if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr, *p;

	ptr = *head;
	if (ptr == NULL)
		return (-1);
	while (ptr != NULL && i < index)
	{
		i++;
		ptr = ptr->next;
	}
	if (i < index)
		return (-1);
	if (i == index)
	{
		p = ptr;
		ptr = ptr->next;
		free(p);
	}
	return (1);
}
