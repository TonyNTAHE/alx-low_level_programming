#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head:  pointer.
 * @index: the position.
 * Return: pointer to the index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t  i = 0;

	while (head != NULL)
	{
		head = head->next;
		i++;
		if (i == index)
		{
			return (head);
		}
	}
	return (NULL);
}
