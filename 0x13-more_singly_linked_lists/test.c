#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer.
 * @n: integer.
 * Return: the new address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
        listint_t *p;

        p = malloc(sizeof(listint_t));
        if (p == NULL)
                return (NULL);
        p->n = n;
        p->next = *head;
        *head = p;
        return (*head);
}
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
                printf("[%p] %d\n", (void *)&s, s->n);
                s = s->next;
                f = f->next->next;
                if (s == f)
                {
                        printf("-> [%p] %d\n", (void *)&s, s->n);
                        break;
                }
                count++;
        }
        if (s != f)
        {
                while (head != NULL)
                {
                        printf("[%p] %d\n", (void *)&s, s->n);
                        head = head->next;
                        count++;
                }
                exit(98);
        }
        return (count);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *head2;
    listint_t *node;

    head2 = NULL;
    add_nodeint(&head2, 0);
    add_nodeint(&head2, 1);
    add_nodeint(&head2, 2);
    add_nodeint(&head2, 3);
    add_nodeint(&head2, 4);
    add_nodeint(&head2, 98);
    add_nodeint(&head2, 402);
    add_nodeint(&head2, 1024);
    print_listint_safe(head2);
    head = NULL;
    node = add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    node->next = add_nodeint(&head, 98);
    add_nodeint(&head, 402);
    add_nodeint(&head, 1024);
    print_listint_safe(head);
    return (0);
}
