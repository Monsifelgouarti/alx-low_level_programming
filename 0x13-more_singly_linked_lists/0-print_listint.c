#include <stddef.h>
#include "lists.h"
/**
 * print_listint -  prints all the elements of a listint_t list
 * @h: list to be printed
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;
	const listint_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		printf("%d", ptr->n);
		printf("\n");
		len++;
		ptr = ptr->next;
	}
	return (len);
}
