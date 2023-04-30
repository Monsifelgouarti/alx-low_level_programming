#include <stddef.h>
#include "lists.h"
/**
 * add_nodeint_end -  add a new node at the end of a list_t list
 * @head: the head of the list
 * @n: integer to initialize a new node
 * Return: the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *p;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	p = *head;
	if (p == NULL)
		*head = ptr;
	else
	{
		while (p->next != NULL)
			p = p->next;
		p->next = ptr;
	}
	return (ptr);
}
