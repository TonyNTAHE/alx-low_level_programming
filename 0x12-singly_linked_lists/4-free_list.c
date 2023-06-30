#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: head pointer.
 * Return: nothing.
 */
void free_list(list_t *head)
{
	list_t *p, *ptr;

	p = head;
	if (p != NULL)
	{
		ptr = p->next;
		free(p->str);
		free(p);
		p = ptr;
	}
}
