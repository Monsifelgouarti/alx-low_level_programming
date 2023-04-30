#include <stddef.h>
#include "lists.h"
/**
 * add_node -  add a new node at the begining of a list_t list
 * @head: the head of the list
 * @str: string to initialize a new node
 * Return: the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *s;
	list_t *ptr;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL || str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	s = strdup(str);
	ptr->str = s;
	ptr->len = strlen(str);
	if (head == NULL)
		*head = ptr;
	else
	{
		ptr->next = *head;
		*head = ptr;
	}
	return (ptr);
}
