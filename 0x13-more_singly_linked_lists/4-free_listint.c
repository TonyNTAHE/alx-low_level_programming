#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer.
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p);
	}
	head = NULL;
}
