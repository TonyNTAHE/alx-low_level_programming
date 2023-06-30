#include "lists.h"

/**
 * list_len - returns the number of elements in a linked lisst_t list.
 * @h: node.
 * Return: len.
 */
size_t list_len(const list_t *h)
{
	int len = 0;
	const list_t *p = malloc(sizeof(list_t));

	if (h == NULL)
		return (-1);
	p = h;
	while (p != NULL)
	{
		len++;
		p = p->next;
	}
	free(p);
	return (len);
}

