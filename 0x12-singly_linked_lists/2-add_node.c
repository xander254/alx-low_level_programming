#include "lists.h"
#include <stddef.h>
#include <string.h>

/**
  * add_node -function that adds a new node at the begining of a list
  * Return: adress of the new element / NULL if failed.
  * @head: the head of the list
  * @str: a string to be added i the new node
  */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int length_of_string = 0;
	char *duplicated_str;

	list_t *new_node;

	length_of_string = strlen(str);


	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	duplicated_str = strdup(str);
	if (duplicated_str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = duplicated_str;
	new_node->len = length_of_string;
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}

