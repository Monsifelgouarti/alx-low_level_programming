#include <stddef.h>
#include "lists.h"
/**
 * pop_listint -  add a new node at the begining of a list_t list
 * @head: the head of the list
 * Return: the data in the head's node or 0 if linked list is empty.
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *ptr;

	if (*head == NULL)
		return (data);
	ptr = *head;
	data = ptr->n;
	if (ptr->next != NULL)
	{
		*head = ptr->next;
		free(ptr);
	}
	else
	{
		free(ptr);
		*head = NULL;
	}
	return (data);
}
