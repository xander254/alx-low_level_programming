#include "lists.h"

/**
  * add_dnodeint - a function that adds a new node at the
  * beginning of a dlistint_t list
  * @head: the head of the doubly linked list
  * @n: the data to be added in the node that is created
  * Return: address of the new element else NULL
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		printf("Memory allocation Failed\n");
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		(*head)->prev = new_node;
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
