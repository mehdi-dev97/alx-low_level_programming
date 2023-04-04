#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: the head list
 * Return: count of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *cur = h;
	size_t nodes = 0;

	while (cur != NULL)
	{
		printf("%d\n", cur->n);
		nodes += 1;
		cur = cur->next;
	}
	return (nodes);
}
