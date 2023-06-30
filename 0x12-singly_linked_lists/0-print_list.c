#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: node.
 * Return: number of the nodes.
 */
size_t print_list(const list_t *h)
{
	const list_t *p = NULL;
	int count = 0;

	if (h == NULL)
	{
		return (1);
	}
	p = h;
	while (p != NULL)
	{
		if (p->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", p->len, p->str);
		p = p->next;
		count++;
	}
	return (count);
}
