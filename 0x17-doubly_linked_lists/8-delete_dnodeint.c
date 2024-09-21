#include "lists.h"

/**
  * delete_dnodeint_at_index - a function that deletes the node
  * at index index of a dlistint_t linked list
  * @head: the head of the list
  * @index: the index to be deleted
  * Return: 1 if pass -1 if fail
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *previous = NULL;
	unsigned int i = 1;

	if (!current || index < 1)
	{
		return (-1);
	}
	while (current && i < index)
	{
		previous = current;
		current = current->next;
		i++;
	}
	if (!current)
	{
		return (-1);
	}
	if (previous)
	{
		previous->next = current->next;
	}
	else
	{
		*head = (*head)->next;
	}
	if (current->next)
	{
		current->next->prev = previous;
	}
	free(current);
	return (1);
}
