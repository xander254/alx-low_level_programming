#include "lists.h"

/**
  * print_dlistint - a function that prints laa elements of a list
  * @h: the head node
  * Return: number of nodes
  */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != 0)
	{
		printf("%u\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
