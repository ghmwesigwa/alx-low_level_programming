#include "lists.h"

/**
* add_node - add node to beginning of linked list
* @head: linked list
* @str: data for new node
*
* Return: address of new element, or NULL if failed
**/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		printf("Error\n");
		return (0);
	}

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
