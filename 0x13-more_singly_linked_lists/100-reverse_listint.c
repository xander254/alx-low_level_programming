#include "lists.h"
#include <stdio.h>

/**
  * reverse_listint -reverses a listint_t linked list
  * @head: double pointer to the head of the list
  *
  * Return: a pointer to the first node of the reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_node, *previous, *current;

	previous = NULL;
	current = *head;

	while (current != NULL)
	{
		next_node = current->next;
		current->next = previous;
		previous = current;
		current = next_node;
	}
	*head = previous;
	return (previous);
}
