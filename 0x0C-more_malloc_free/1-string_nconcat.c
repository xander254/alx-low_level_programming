#include <stdlib.h>
#include <string.h>

/**
  * string_nconcat - Concatenates two strings.
  * @s1: The first string.
  * @s2: The second string.
  * @n: The number of bytes from s2 to concatenate to s1.
  *
  * Return: Pointer to the newly allocated memory containing s1,
  * followed by the
  * first n bytes of s2, and null-terminated. If the function fails,
  * returns NULL.
  * If n is >= to the length of s2, the entire s2 is used.
  * If s1 or s2 is NULL, treat it as an empty string.
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int len_s1, len_s2, i, j;

	if (s1 == NULL)
	{
		s1 = ("");
	}
	if (s2 == NULL)
	{
		s2 = ("");
	}
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	if (n >= len_s2)
	{
		n = len_s2;
	}
	new_str = malloc(len_s1 + n + 1);
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len_s1; i++)
	{
		new_str[i] = s1[i];
	}
	for (j = 0; j < n; j++, i++)
	{
		new_str[i] = s2[j];
	}
	new_str[i] = '\0';
	return (new_str);
}

