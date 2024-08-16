#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

/**
  * read_textfile - a func that reads text file and printd to stdout
  * @letters: no of letters to be printed
  * @filename: this is the filename to be opened
  * Return: 0 on error else number of characters printed
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *str_buffer;
	FILE *file_pointer = NULL;
	size_t num_read, num_written;

	if (filename == NULL)
	{
		return (0);
	}
	file_pointer = fopen(filename, "r");
	if (file_pointer ==  NULL)
	{
		return (0);
	}
	str_buffer = malloc(sizeof(char) * (letters + 1));
	if (str_buffer == NULL)
	{
		fclose(file_pointer);
		return (0);
	}
	num_read = fread(str_buffer, sizeof(char), letters, file_pointer);
	if (num_read <= 0)
	{
		free(str_buffer);
		fclose(file_pointer);
		return (0);
	}
	str_buffer[num_read] = '\0';

	num_written = fwrite(str_buffer, sizeof(char), num_read, stdout);
	if (num_written < num_read)
	{
		free(str_buffer);
		fclose(file_pointer);
		return (0);
	}
	free(str_buffer);
	fclose(file_pointer);
	return (num_written);
}
