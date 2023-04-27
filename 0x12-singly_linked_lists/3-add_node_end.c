#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - Function that adds a node at the end of a list.
 * @head: Pointer of the first node.
 * @str: String to be added as the node at the end of the list.
 * Return: Address of the new element and NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
