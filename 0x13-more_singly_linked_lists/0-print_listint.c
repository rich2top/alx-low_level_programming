#include "lists.h"

/**
 * main - print all element of a listint_t list
 *
 * Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
size_t num = 0;

	while (h)
	{
	printf("%d\n", h->n);
	num++;
	h = h->next;
	}

	return (num);
}
