#include "lists.h"
/**
 * dlistint_len - returns number of elements of a list
 * @h: head of the list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t a = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}