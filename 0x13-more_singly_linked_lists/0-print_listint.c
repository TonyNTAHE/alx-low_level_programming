#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list.
 * @h: head pointer.
 * Return: number of node.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *p;

	if (h == NULL)
	{
		return (count);
	}
	p = h;
	while (p != NULL)
	{
		printf("%d\n", p->n);
		count++;
		p = p->next;
	}
	return (count);
}
