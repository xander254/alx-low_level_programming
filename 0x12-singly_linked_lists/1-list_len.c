#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
  * list_len - a function that returns the number of elements in a
  * linked list_t list.
  * @h: the head of the linked list
  * Return: the number of elements in a linked list
  */

size_t list_len(const list_t *h)
{
	size_t element_count = 0;

	while (h != NULL)
	{
		element_count++;
		h = h->next;
	}
	return (element_count);
}
