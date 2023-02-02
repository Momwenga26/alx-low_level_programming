#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: a pointer to the head of the list listint_t
 *
 * Return: the number of nodes in the listint_t
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
