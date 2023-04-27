#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - Function that adds a new node at the begining of list.
 * @head: Double pointer to the first node in the list.
 * @str: New string to add to the node.
 * Return: Address of the new node of NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
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
	new->next = (*head);
	(*head) = new;
	return (*head);
}
