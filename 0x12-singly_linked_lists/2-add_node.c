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
	const list_t *ptr;

	s = malloc(sizeof(char) * strlen(str));
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL || s == NULL)
		return (NULL);
	s = strdup(str);
	strdup(ptr->str,s);
	ptr->len = strlen(s);
	if (head == NULL)
		*head = ptr;
	else
	{
		ptr->next = *head;
		*head = ptr;
	}
	return (&ptr);
}
