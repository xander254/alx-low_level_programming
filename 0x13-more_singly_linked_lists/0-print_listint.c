#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
  * print_listint - a func that prints all elements of listint_t list
  * Return: number of nodes
  * @h: the head of the node
  */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		printf("%d", h->n);
		printf("\n");
		h = h->next;
		count++;
	}
	return (count);
}
