#include "lists.h"
#include <stdio.h>
/**
 * print_listint - Function that prints all the elements of a singly linked list
 * @h: Pointer to the first element of the linked list.
 * Return: The number of nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	if (h == NULL)
	{
		return (NULL);
	}
	else
	{
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		elements++;
	}
	return (elements);
	}
}
