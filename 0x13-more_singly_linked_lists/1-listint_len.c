#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: head pointer.
 * Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (count);
	}
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
