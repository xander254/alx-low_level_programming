#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - determine whether a num is negative or positive.
 * 0: the number to be checked.
 * i: integer that can also be checked
 * Return: 0 on success.
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is %s\n", i, "negative");
	{
	else if (i > 0)
		printf("%d is %s\n", i, "positive");
	}
	else
	{
		printf("%d is %s\n", i, "zero");
	}
	return;
}
