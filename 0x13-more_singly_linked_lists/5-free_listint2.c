#include <stddef.h>
#include "lists.h"
/**
 * free_listint2 -  free a listint_t list
 * @head: the head of the list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	p = *head;
	if (p != NULL)
	{
		while (p->next != NULL)
		{
			*head = p->next;
			free(p);
			p = *head;
		}
		free(p);
	}
	else
		free(p);
	*head = NULL;
	head = NULL;
}
