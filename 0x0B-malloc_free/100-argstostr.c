#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
  * argstostr-A function that concatenates all arguments of a program
  * @ac: argument count
  * @av: argument vector
  * Return: a pointer to the new string or NULL if it fails
  */

char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int curr_pos = 0;
	int i, j;
	char *str;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i] + 1);
	}
	str = malloc(total_length + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[curr_pos] = av[i][j];
			curr_pos++;
		}
		str[curr_pos] = '\n';
		curr_pos++;
	}
	str = str + '\0';
	return (str);
}




