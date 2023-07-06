#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer.
 * @idx: the index;
 * @n: the data.
 * Return: address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p, *s;
	size_t i = 0;

	if (head == NULL)
		return (NULL);
	if (idx == 0)
	{
		p = malloc(sizeof(listint_t));
		if (p == NULL)
			return (NULL);
		p->n = n;
		p->next = *head;
		*head = p;
		return (p);
	}
	s = *head;
	while (i < idx - 1 && s != NULL)
	{
		s = s->next;
		i++;
	}
	if (s == NULL)
		return (NULL);
	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);
	p->n = n;
	p->next = s->next;
	s->next  = p;
	return (p);
}
