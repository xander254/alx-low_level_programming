#include "lists.h"

/**
  * dlistint_len - a function that returns the number of
  * elements in a linked list dlistint_int
  * Return: number of elements in a linked list
  * @h: the head of the list
  */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
