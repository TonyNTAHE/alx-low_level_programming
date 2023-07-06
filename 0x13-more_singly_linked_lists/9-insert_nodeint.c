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
	listint_t *p ,*s, *c;
	size_t i = 0;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);
	p->n = n;
	p->next = NULL;
	if (*head == NULL || head == NULL)
		return (NULL);
	s = *head;
	while (s != NULL)
	{
		s = s->next;
		i++;
		if (i == idx - 1)
		{
			c = s->next;
			s->next = p;
			p->next = c;
			return (s);
		}
	}
	return (NULL);
}
