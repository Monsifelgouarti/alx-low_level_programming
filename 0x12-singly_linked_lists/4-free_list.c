#include <stddef.h>
#include "lists.h"
/**
 * free_list -  free a list_t list
 * @head: the head of the list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *p;

	p = head;
	if (p != NULL)
	{
		while (p->next != NULL)
		{
			head = p->next;
			free(p->str);
			free(p);
			p = head;
		}
		free(p->str);
		free(p);
	}
}
