#include <stddef.h>
#include "lists.h"
/**
 * sum_listint -  returns the sum of all data in a linked list
 * @head: linked list
 * Return: sum or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

	ptr = head;
	if (ptr == NULL)
		return (0);
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
