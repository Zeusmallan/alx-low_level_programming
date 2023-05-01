#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - Function that inserts data
 * at a given position in the linked list.
 * @head: Pointer to the first data.
 * @idx: Index in the liked list where the data would be stored.
 * @n: The data to add to the linked list.
 * Return: Adress to the new data if
 * memory was allocated and NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *trans = *head;
	listint_t *new_node;
	unsigned int ind = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (trans != NULL && ind < idx - 1)
	{
		trans = trans->next;
		ind++;
	}
	if (trans == NULL)
	{
		return (NULL);
	}
	new_node->next = trans->next;
	trans->next = new_node;
	return (new_node);
}
