#include <stddef.h>
#include "lists.h"
/**
 * add_node_end -  add a new node at the end of a list_t list
 * @head: the head of the list
 * @str: string to initialize a new node
 * Return: the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *s;
	list_t *ptr, *p;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL || str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	s = strdup(str);
	ptr->str = s;
	ptr->len = strlen(str);
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
