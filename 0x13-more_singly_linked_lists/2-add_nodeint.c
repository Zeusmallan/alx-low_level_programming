#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - Function that adds new node to the begining of the list.
 * @head: Pointer to the first node.
 * @n: The constant data type to store in the node.
 * Return: Poimter to new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
	new->n = n;
	new->next = *head;
	*head = new;
	}
	return (new);
}
