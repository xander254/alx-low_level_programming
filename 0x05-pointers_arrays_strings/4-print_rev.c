#include <stdio.h>

/**
  *print_rev - print in reverse
  *Return: 0
  *@s: the string we are using
  */
void print_rev(char *s)
{
	int i;
	int length = 0;
	char *end = s;

	while (*end != '\0')
	{
		length++;
		end++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
