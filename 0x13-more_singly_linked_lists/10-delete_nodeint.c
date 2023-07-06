#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of
 * a listint_t linked list.
 * @head: pointer.
 * @index: the index.
 * Return: 1 if succeded, otherwise -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t i = 0;
	listint_t *p, *s;

	if (index == 0)
	{
		if (*head == NULL)
			return (-1);
		p = *head;
		(*head) = (*head)->next;
		free(p);
		return (1);
	}
	p = *head;
	while (i < index - 1 && p != NULL && p->next != NULL)
	{
		p = p->next;
		i++;
	}
	if (p == NULL || p->next == NULL)
		return (-1);
	s = p->next;
	p->next = s->next;
	free(s);
	return (1);
}
