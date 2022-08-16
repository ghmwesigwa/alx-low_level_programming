#include "lists.h"

/**
* free_listint2 - free a linked list of int and add null
* @head: pointer of pointer that contain adress of
* Return: nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *ptr;
	while (*head != NULL) /* have ptr keep track of head node and free */
	{
		ptr = *head;
		*head = ptr->next; /* move to next node while ptr frees prior */
		free(ptr);
	}
*head = NULL;

}
