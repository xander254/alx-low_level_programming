#include "lists.h"
#include <stdlib.h>

/**
  * delete_nodeint_at_index - a function that deletes the node at
  * index index of a listint_t linked list
  * @head: the head of the list
  * @index: the index of the node to be deleted
  * Return: 1 if successfull else 0
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *next_node, *temp;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (temp != NULL && count < index)
	{
		next_node  = temp;
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
	{
		return (-1);
	}
	next_node->next = temp->next;
	free(temp);

	return (1);
}
