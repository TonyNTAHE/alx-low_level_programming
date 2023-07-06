#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node's data(n);
 * @head: pointer.
 * Return: head node's data(n);
 */
int pop_listint(listint_t **head)
{
	size_t n;
	listint_t *p;

	if (*head == NULL)
	{
		return (0);
	}
	p = *head;
	n = p->n;
	*head = (*head)->next;
	free(p);
	return (n);
}
