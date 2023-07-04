#include <stddef.h>
#include "lists.h"
/**
 * add_nodeint -  add a new node at the begining of a list_t list
 * @head: the head of the list
 * @n: integer to initialize a new node
 * Return: the address of the new element, NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	if (head == NULL)
		*head = ptr;
	else
	{
		ptr->next = *head;
		*head = ptr;
	}
	return (ptr);
}
