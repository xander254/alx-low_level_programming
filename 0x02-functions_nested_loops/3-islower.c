#include <main.h>

/*
*_is lower check if a caracter is a lower case
*@c vharacter to be checked
*
*/
int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
