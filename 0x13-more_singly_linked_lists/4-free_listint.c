#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - Functions that frees nodes in a linked list.
 * @head: Pointed to the first node.
 */
void free_listint(listint_t *head)
{
	listint_t *present;

	while (head != NULL)
	{
		present = head;
		head = head->next;
		free(present);
	}
}
