#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint - a function that adds a node at the beggining of a
  * listint_t list
  * Return: address of new element else NULL
  * @head: the head of the linked list
  * @n: the data in the linked list
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->next  = *head;
	new_node->n = n;
	*head = new_node;

	return (new_node);
}

