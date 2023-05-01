#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - Function that returns the index of
 * a node in a singly linked list.
 * @head: Pointer to the pointer of the first node.
 * @index: The index of the linked list starting from 0.
 * Return: Index of the a node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *trans;
	unsigned int ind = 0;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		trans = head;
		while (trans != NULL && ind < index)
		{
			trans = trans->next;
			ind++;
		}
		return (ind == index ? trans : NULL);
	}
}
