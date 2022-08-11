#include "lists.h"
/**
* print_list - prints all elements of list_t list
* @h: linked list
* Return: number of nodes in linked list
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h)
	{
		while (h)
		{
			if (h->str == NULL)
				printf("[0] %p\n", h->str);
			else
				printf("[%d] %s\n", h->len, h->str);
			count++;
			h = h->next;
		}
	}
	return (count);
}
