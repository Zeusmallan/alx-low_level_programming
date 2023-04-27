#include <stdlib.h>
#include "lists.h"
/**
 * free_list - Function that frees a singly linked list.
 * @head: Pointer of the list that needs to be freed.
 */
void free_list(list_t *head)
{
	list_t *temp;
	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
