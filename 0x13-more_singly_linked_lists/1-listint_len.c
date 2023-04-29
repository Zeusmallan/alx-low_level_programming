#include <stdio.h>
#include "lists.h"
/**
 * listint_len - Function that prints the lenght of a singly linked list.
 * @h: Pointer to the first node of the list.
 * Return: Number of elements in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	if (h == NULL)
	{
		return (1);
	}
	else
	{
		while (h != NULL)
		{
			h = h->next;
			len++;
		}
		return (len);
	}
}
