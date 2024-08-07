#include "lists.h"
#include <stdlib.h>

/**
  * free_listint - a function that frees a listint_t list
  * @head: head of the list
  */

void free_listint(listint_t *head)
{
	listint_t * current_node, *next_node;

	if (head == NULL)
	{
		return;
	}
	current_node = head;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
}
