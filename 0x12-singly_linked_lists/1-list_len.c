#include <stdio.h>
#include "lists.h"
/**
 * list_len - Function that returns the number of elements in a linked list.
 * @h: Pointer to the first node.
 * Return: Number of elements in a linked list.
 */
size_t list_len(const list_t *h)
{
	size_t e = 0;

	while (h)
	{
		e++;
		h = h->next;
	}
	return (e);
}
