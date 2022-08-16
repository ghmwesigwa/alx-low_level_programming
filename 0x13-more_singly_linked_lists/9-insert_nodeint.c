#include "lists.h"
/**
* insert_nodeint_at_index - insert node at index
* @head: linked list
* @idx: index to add
* @n: n to store in the node
* Return: adress of the new node or null
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	unsigned int i;
	listint_t *new_node, *tmp;

	/* check whether the head is empty pointer */
	if (head == NULL)
		return (NULL);

	/* make new node*/
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n; /* set values for new node */

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* iterate to 1 before nth index to insert */
	tmp = *head;
	for (i = 0; i < (idx - 1); i++)
	{
		tmp = tmp->next;

		if (tmp == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}

	/* insert into list */
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
