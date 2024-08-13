#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <sys/stat.h>
/**
  * create_file - a function that creates a file.
  * @filename: the name of the file
  * @text_content: null terminated string to be written
  * Return: 1 on success else -1
  */
int create_file(const char *filename, char *text_content)
{
	FILE *fd = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = fopen(filename, "w+");
	if (fd == NULL)
	{
		return (-1);
	}
	chmod(filename, 600);

	if (text_content != NULL)
	{
		if (fputs(text_content, fd) == EOF)
		{
			fclose(fd);
			return (-1);
		}
	}
	fclose(fd);
	return (1);
}
