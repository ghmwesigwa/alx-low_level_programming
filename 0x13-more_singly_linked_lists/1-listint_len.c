#include "lists.h"
/**
* listint_len - print integer from a node
* @h: linked list
* Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
	int num_nodes = 0;

	while (h != NULL)
	{
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
