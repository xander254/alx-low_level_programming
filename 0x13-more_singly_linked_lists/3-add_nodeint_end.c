#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint_end - a function that adds a new node at the end of
  * a listint_t list.
  * @head: the head of the linked list
  * @n: the data in the linked list
  * Return: adress of new element else NULL
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	return (new_node);
}

