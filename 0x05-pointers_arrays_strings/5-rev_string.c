#include "main.h"


/**
  * rev_string - reverse a string
  * Return: 0
  * @s: string to be checked using this param
  */
void rev_string(char *s)
{
	int len = 0;
	char *end = s;

	while (*end != '\0')
	{
		len++;
		end++;
	}
	end--;
	while (end >= s)
	{
		putchar(*end);
		end--;
	}
	putchar('\n');
}

