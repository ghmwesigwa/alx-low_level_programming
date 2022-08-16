#include "lists.h"
/**
 * free_listint - free a linked list of int
 * @head: pointer of pointer that contain adress of
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;
	
	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
