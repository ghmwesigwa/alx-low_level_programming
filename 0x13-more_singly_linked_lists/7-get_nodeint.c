#include "lists.h"

/**
* get_nodeint_at_index - returns nth node of listint_t linked list
* @head: pointer to head pointer of linked list
* @index: nth node
* Return: nth node, or NULL if failed
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	
for (i = 0; head != NULL; i++)
{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
	}
	return (NULL);
}
