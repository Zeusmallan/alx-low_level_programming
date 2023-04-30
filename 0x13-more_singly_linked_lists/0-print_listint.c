#include <stdio.h>
#include "lists.h"
/**
 * print_listint - Function prints the elements of a linked list
 * @h: Pointer the first node.
 * Return: Number of nodes and their elements.
 */
size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		elements++;
	}
	return (elements);
}
