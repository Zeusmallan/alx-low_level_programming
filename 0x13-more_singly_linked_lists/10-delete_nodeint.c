#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - Function that deletes the node at an index.
 * @head: Pointer to the pointer of thr data in the first node.
 * @index: Index of the node to delete in the list.
 * Return: 1 if successful and -1 if operation fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *trans = *head;
	listint_t *former = NULL;
	unsigned int ind = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	for (ind = 0; ind < index; ind++)
	{
		if (trans == NULL)
		{
			return (-1);
		}
		former = trans;
		trans = trans->next;
	}
	if (former == NULL)
	{
		*head = trans->next;
	}
	else
	{
		former->next = trans->next;
	}
	free(trans);
	return (1);
}
