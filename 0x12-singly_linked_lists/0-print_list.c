#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
  * print_list - function that prints a list
  * Return: number of nodes
  * @h: the head of the linked list
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
			printf("\n");
		}
		else
		{
			printf("[%u] %s", h->len, h->str);
			printf("\n");
		}
		h = h->next;
		node_count = node_count + 1;
	}
	return (node_count);
}

