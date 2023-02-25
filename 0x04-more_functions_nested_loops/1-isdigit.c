#include "main.h"

/**
* _isdigit - checj for numbers
*@c: First operand
*Return: 1 if char is digit, otherwise 0
*/
int _isdigit(int c)
{
	if (c < 9)
		return (1);
	else
		return (0);
}
