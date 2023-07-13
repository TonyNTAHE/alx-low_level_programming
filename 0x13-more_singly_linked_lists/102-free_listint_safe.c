#include "lists.h"

/**
 * free_listint_t - frees a listint_t list.
 * @h: pointer.
 * Return: the size of the list only once.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *p, *ptr;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	p = *h;
	while (p != NULL)
	{
		count++;
		if (p->next >= p)
		{
			*h = NULL;
			return (count);
		}
		ptr = p;
		p = p->next;
		free(ptr);
	}
	*h = NULL;
	return (count);
}
