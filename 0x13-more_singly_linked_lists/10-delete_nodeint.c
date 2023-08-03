#include "lists.h"
/**
* delete_nodeint_at_index - delete a node at nth index
* @head: linked list
* @index: index to delete
* Return: 1 if succeed, else -1
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	unsigned int i;
	listint_t *tmp, *copy = *head;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = copy->next;
		free(copy);
		return (1);
	}

	for (i = 0; i < (index - 1) && copy != NULL; i++)
	{
		copy = copy->next;
	}

	if (i != (index - 1) || copy->next == NULL)
		return (-1);
	tmp = copy->next;
	copy->next = (copy->next)->next;
	free(tmp);

	return (1);
}
