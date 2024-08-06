#include "lists.h"

/**
  * listint_len - a function that returns the number of elements 
  * in a linked listint_t list.
  * @h: the head of the linked list
  */

size_t listint_len(const listint_t *h)
{
	size_t element_count = 0;

	while (h != NULL)
	{
		element_count++;
		h = h->next;
	}
	return (element_count);
}
