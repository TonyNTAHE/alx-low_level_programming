#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer.
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head == NULL)
		return;
	if (*head != NULL)
	{
		p = *head;
		*head = (*head)->next;
		free(p);
	}
	*head = NULL;
}
