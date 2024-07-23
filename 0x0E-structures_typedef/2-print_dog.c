#include <stdio.h>
#include "dog.h"


/**
  * print_dog - print a struct dog
  * @struct dog - a struct of type dog
  * @d: a pointer to struct dog
  * Return: Always 0
  */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("NULL");
	}
	if ((*d).name == NULL)
	{
		printf("%s:(nil)\n", (*d).name);
	}
	else
	{
		printf("Name: %s\n", (*d).name);
	}
	printf("Age: %f\n", (*d).age);

	if ((*d).owner == 0)
	{
		printf("%s:(nil)\n", (*d).owner);
	}
	else
	{
		printf("Owner: %s\n", (*d).owner);
	}
}
