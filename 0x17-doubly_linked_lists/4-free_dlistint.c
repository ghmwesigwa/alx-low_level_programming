#include "lists.h"

/**
* free_dlistint - frees a doubly linked list
* @head: head of the list
*/
void free_dlistint(dlistint_t *head)
{
	/* return if empty list */
	if (!head)
		return;

	while (head && head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
