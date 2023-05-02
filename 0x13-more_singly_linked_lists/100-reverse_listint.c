#include "lists.h"
#include <stdio.h>
/**
 * reverse_listint - Function that reverses nodes in a linked list.
 * @head: Double pointer to the fir node.
 * Return: Pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *former = NULL;
	listint_t *nxt = NULL;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	else
	{
		while (*head != NULL)
		{
			nxt = (*head)->next;
			(*head)->next = former;
			former = *head;
			*head = nxt;
		}
		*head = former;
	}
	return (*head);
}


