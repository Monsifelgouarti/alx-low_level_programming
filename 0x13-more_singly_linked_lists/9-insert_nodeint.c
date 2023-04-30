#include <stddef.h>
#include "lists.h"
/**
 * insert_nodeint_at_index -  insert a node at nth index in a linked list
 * @head: linked list
 * @idx: index to insert a new node.
 * @n: data to initialize a node.
 * Return:address of the new node or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *ptr, *p;

	p = malloc(sizeof(listint_t));
	ptr = *head;
	if (p == NULL)
		return (NULL);
	p->n = n;
	if (ptr == NULL)
		*head = p;
	else
	{
		while (ptr != NULL && i < idx)
		{
			i++;
			ptr = ptr->next;
		}
		if (i < idx)
			return (NULL);
		if (i == idx)
		{
			p->n = n;
			p->next = ptr->next;
			ptr->next = p;
		}
	}
		return (p);
}
