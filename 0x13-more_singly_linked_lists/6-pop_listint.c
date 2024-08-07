#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * pop_listint -  a function that deletes the head node of a
  * listint_t linked list, and returns the head node’s data (n)
  * @head: the head of the list
  * Return: 0
  */
int pop_listint(listint_t **head)
{
	listint_t *current_node;
	int data = 0;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	current_node = *head;
	data = current_node->n;

	free(current_node);
	return (data);
}
