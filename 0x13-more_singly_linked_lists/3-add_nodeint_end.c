#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - Function that adds a node to the end of the list.
 * @head: Pointer of the node to be added.
 * @n: Data to be added to the end of the node.
 * Return: Pointer to the new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node;
	listint_t *present;

	end_node = malloc(sizeof(listint_t));
	if (end_node == NULL)
	{
		return (NULL);
	}
	end_node->n = n;
	end_node->next = NULL;
	if (*head == NULL)
	{
		*head = end_node;
	}
	else
	{
		present = *head;
	}
	while (present->next != NULL)
	{
		present = present->next;
	}
	present->next = end_node;
	return (end_node);
}



