#include <stdio.h>
#include "lists.h"
/**
 * print_listint - Function that prints
 * all the elements in a linked list.
 * @h: Pointer to the first node.
 * Return: Number of Nodes and elements in a linked list.
 */
size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	if (h == NULL)
	{
		return (0);
	}
	
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		elements++;
	}
	return (elements);
}
