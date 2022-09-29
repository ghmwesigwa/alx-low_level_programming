#include "lists.h"

/**
* get_dnodeint_at_index - deletes the head node
* @head: address new head
* @index: nth element;
* Return: head node’s data (n).
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);

	/* countdown till index matches or end of list */
	while (index && head->next)
	{
		head = head->next;
		index -= 1;
	}
	if (index == 0)
		return (head);

	/* index out of range */
	return (NULL);
}
