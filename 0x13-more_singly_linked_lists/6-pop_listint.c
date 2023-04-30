#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - Function that deletes the first node of a list.
 * @head: Pointer that points to the pointer of the first node.
 * Return: 0 if the Node is empty and
 * the pointer to the new node upon completion.
 */
int pop_listint(listint_t **head)
{
	listint_t *present;
	int data_in_node;

	if (*head == NULL)
	{
		printf("There is nothing to delete, the list is empty\n");
		return (0);
	}
	else
	{
		present = (*head)->next;
		data_in_node = (*head)->n;
		free(*head);
		*head = present;
	}
	return (data_in_node);
}
