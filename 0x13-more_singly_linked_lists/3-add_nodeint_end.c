#include "lists.h"
/**
* add_nodeint_end - add a new node at the end
* @head: pointer of pointer that contain adress of
* last node or NULL
* @n: integer
* Return: adress of the new node or NULL
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new_node, *tmp;

	new_node = malloc(sizeof(listint_t)); /* make new node and set values */
	if (new_node == NULL)
		return (NULL);

	new_node->n = n; /* set values */
	new_node->next = NULL; 

	if (*head == NULL) 
		*head = new_node;
	else
	{
		tmp = *head; 

		while (tmp->next != NULL) /* iterate till last node */
			tmp = tmp->next;
		tmp->next = new_node; /* link last node to new node */
	}

	return (new_node);
}
