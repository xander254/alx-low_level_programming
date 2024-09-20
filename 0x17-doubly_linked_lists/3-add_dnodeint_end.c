#include "lists.h"

/**
  * add_dnodeint_end - a function that adds a new node at the
  * end of a dlistint_t list
  * @head: the head of the doubly linked list
  * @n: the data to be added in the node that is created
  * Return: address of the new element else NULL
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		perror("Memory allocation Failed\n");
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
		new_node->prev = NULL;
		new_node->next = NULL;
		new_node->n = n;
		*head = new_node;
		return (*head);
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
		new_node->prev = temp;
	}
	return (*head);
}
