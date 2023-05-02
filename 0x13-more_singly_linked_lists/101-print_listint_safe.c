#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - Function that prints all the elements
 * or data in a linked list(int).
 * @head: Pointer to the first node in the linked list.
 * Return: The number of nodes in the linked list.
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *quick;
	listint_t *faster;
	size_t length = 0;

	if (head == NULL)
	{
		return (0);
	}

	quick = faster = (listint_t *)head;
	while (quick != NULL && faster != NULL && faster->next)
	{
		quick = quick->next;
		faster = faster->next->next;
	if (quick == faster)
	{
		exit(98);
	}
	printf("%d\n", quick->n);
	length++;
	}
	if (quick != faster)
	{
		printf("%d\n", quick->n);
		length++;
	}
	return (length);
}
