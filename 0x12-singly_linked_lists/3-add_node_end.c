#include "lists.h"
#include <stddef.h>
#include <string.h>

/**
  * add_node_end - a function to add a node at the end of the list
  * Return: address of the new element or NULL if failed
  * @str:string to be duplicated
  * @head: the head of the linked list
  */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int length_of_string = 0;
	char *duplicated_string;
	list_t *new_node, *temp;

	length_of_string = strlen(str);

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	duplicated_string = strdup(str);

	if (duplicated_string == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = duplicated_string;
	new_node->len = length_of_string;
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
