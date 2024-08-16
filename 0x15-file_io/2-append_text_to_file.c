#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * append_text_to_file - a function that appends text at end of file
  * @filename: file name to be used
  * @text_content: the content to be appended
  * Return: 1 success -1 on failure
  */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file_pointer;

	if (filename == NULL)
	{
		return (-1);
	}
	file_pointer = fopen(filename, "a");
	if (file_pointer == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (-1);
	}
	fprintf(file_pointer, "%s", filename);
	fclose(file_pointer);
	return (1);
}
