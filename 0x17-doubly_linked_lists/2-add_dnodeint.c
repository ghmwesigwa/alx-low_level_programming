#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint - adds new nodes to doubly linked list (at he head)
* @head: address new head
* @n: number to add
* Return: head
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	/* malloc and set new node data */
	new = malloc(sizeof(struct dlistint_s));
	if (!new)
		return (NULL);
	new->n = n;

	/* account for empty linked list */
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}

	/* account for regular linked list */
	new->next = *head;
	new->prev = NULL;
	(*head)->prev = new;
	*head = new;
	return (new);
}
