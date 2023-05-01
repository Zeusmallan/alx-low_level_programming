#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - Function that sums or all
 * the elements or data in a linked list.
 * @head: Pointer to the first data in the linked list.
 * Return: The sum of all the data in a linked list.
 */
int sum_listint(listint_t *head)
{
	listint_t *trans;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		trans = head;
		while (trans != NULL)
		{
			sum += trans->n;
			trans = trans->next;
		}
		return (sum);
	}
}
