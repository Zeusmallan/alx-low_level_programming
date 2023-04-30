#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - Functions that frees all the nodes,
 * except for the first one and turns the pointer to null.
 * @head: Pointer to the first node.
 */
void free_listint2(listint_t **head)
{
	listint_t *present;
	listint_t *next;

	if (head == NULL)
	{
		printf("Error:There is only one node with NULL pointer already\n");
		return;
	}
	else
	{
	present = *head;
	while (present != NULL)
	{
		next = present->next;
		free(present);
		present = next;
	}
	*head = NULL;
	}
}
