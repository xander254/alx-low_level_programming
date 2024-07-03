#include "main.h"


/**
  * rev_string - reverse a string
  * Return: 0
  * @s: string to be checked using this param
  */
void rev_string(char *s)
{
	int i;
	int len = 0;
	char *end;
	
	while (*end !='\0')
	{
		len`++;
		end++;

	for (i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
		putchar('\n');
}


