#include "lists.h"
#include <stdlib.h>

/**
  * insert_nodeint_at_index - a func to insert a node at a given
  * position
  * @head: the head of the list
  * @idx: the index in the list where the node should be added
  * @n:data in the node
  * Return: adress of the new node else NULL
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;
	unsigned int count = 0;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	
	}
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
