#include "lists.h"

/**
* dlistint_len - len of a doubly linked list
* @h: head of the list
* Return: number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes += 1;
	}

	return (nodes);
}
