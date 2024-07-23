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
	}else 
	{
		printf("%s:(nil)\n", (*d).owner);
	}
	if (d == NULL)
	{
		printf("NULL");
	}
	printf("Name: %s\n", (*d).name);
	printf("Name: %f\n", (*d).age);
	printf("Name: %s\n", (*d).owner);
}

		
