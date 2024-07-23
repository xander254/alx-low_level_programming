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
	if ((*d).name == NULL)
	{
		printf("%s:(nil)\n", (*d).name);
	}
	else if ((*d).age == 0)
	{
		printf("%f:(nil)\n", (*d).age);
	}
	else if ((*d).owner == 0)
	{
		printf("%s:(nil)\n", (*d).owner);
	}
	if (d == NULL)
	{
		printf("NULL");
	}
	printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}
