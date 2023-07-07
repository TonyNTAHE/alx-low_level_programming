#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer.
 * Return: number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *s, *f;
	size_t count = 0;

	s = head;
	f = head;
	while (s != NULL && f != NULL && f->next != NULL)
	{
		printf("[%p] %d\n", (void *)s, s->n);
		s = s->next;
		f = f->next->next;
		if (s == f)
		{
			printf("-> [%p] %d\n", (void *)s, s->n);
			break;
		}
		count++;
	}
	if (s != f)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			count++;
		}
		exit(98);
	}
	else
	{
		printf("-> [%p] %d\n", (void *)s, s->n);
	}
	return (count);
}
