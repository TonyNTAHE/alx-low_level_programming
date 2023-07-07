#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer head.
 * Return: pointer to the first node of reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *n, *c, *p = NULL;

	n = *head;
	c = *head;
	while (n != NULL)
	{
		n = n->next;
		c->next = p;
		p = c;
		c = n;
	}
	*head = p;
	return (*head);
}

