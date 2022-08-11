#include "lists.h"

/**
 * add_node_end - add node to end of linked list
 * @head: linked list
 * @str: data for new node
 *
 * Return: address of new element, or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_node = *head;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last_node->next)
		last_node = last_node->next;

	last_node->next = new_node;

	return (new_node);
}
