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

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		temp = *head;
		while (count < index)
		{
			temp = temp->next;
			count++;
		}
		next_node = temp->next;
		temp->next = next_node->next;
		free(next_node);
	}
	return (1);
}
