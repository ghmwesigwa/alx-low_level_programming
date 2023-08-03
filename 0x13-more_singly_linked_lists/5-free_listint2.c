#include "lists.h"

/**
* free_listint2 - free a linked list of int and add null
* @head: pointer of pointer that contain adress of
* Return: nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		ptr = *head;
		*head = ptr->next;
		free(ptr);
	}
	*head = NULL;

}
