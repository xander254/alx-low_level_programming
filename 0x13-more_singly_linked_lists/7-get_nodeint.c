#include "lists.h"
#include <stdlib.h>

/**
  * get_nodeint_at_index - a function that returns the nth node of
  * alistint_t linked list
  * @head: the head of the linked list
  * @index: the index of nodes on the list
  * Return: a node that was requested
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int node_count = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		temp = head;
		while (temp != NULL && node_count < index)
		{
			temp = temp->next;
			node_count++;
		}
	}
	return (temp);
}
