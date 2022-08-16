#include "lists.h"
/**
 * pop_listint - remove the first node
 * @head: pointer of pointer that contain adress of
 * Return: data in the node
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;

	data = tmp->n;

	*head = tmp->next;
	free(tmp);

	return (data);

}
