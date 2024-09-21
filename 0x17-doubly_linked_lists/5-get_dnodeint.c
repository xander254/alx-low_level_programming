#include "lists.h"

/**
  * get_dnodeint_at_index- a function that returns the nth node of
  * a listint_t linked list
  * @head: the head of the linked list
  * @index: the index of nodes on the list
  * Return: a node that was requested else NULL
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
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
