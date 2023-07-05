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
	unsigned int i = 1;
	listint_t *ptr, *p;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);
	p->n = n;
	if (head == NULL)
		*head = p;
	else
	{
		ptr = *head;
		while (ptr->next != NULL && i < idx)
		{
			i++;
			ptr = ptr->next;
		}
		if (i < idx)
			return (NULL);
		if (i == idx)
		{
			p->next = ptr->next;
			ptr->next = p;
		}
	}
		return (p);
}
