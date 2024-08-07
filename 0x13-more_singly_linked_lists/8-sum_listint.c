#include "lists.h"

/**
  * sum_listint - a function that returns the sum of all the data (n)
  * of a listint_t linked list
  * @head: the head of the linked list
  * Return: sum else 0
  */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		temp = head;
		while (temp != NULL)
		{
			sum += temp->n;
			temp = temp->next;
		}
	}
	return (sum);
}
