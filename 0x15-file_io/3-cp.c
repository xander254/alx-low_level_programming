#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

/**
  * main - a function that copies content of a file to another file
  * @av: argument vectors
  * @ac: argument count
  * Return: 0
  */

int main(int ac, char *av[])
{
	FILE *file_pointer;
	FILE *file2_pointer;
	char str_buffer[1024];

	if (ac != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}
	file_pointer = fopen(av[1], "r");
	if (file_pointer == NULL)
	{
		printf("Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	file2_pointer = fopen(av[2], "w");
	if (file2_pointer == NULL)
	{
		printf("Error: Can't write to %s", av[2]);
		exit(99);
	}
	while (fgets(str_buffer, 1024, file_pointer) != NULL)
	{
		fprintf(file2_pointer, "%s", str_buffer);
	}
	fclose(file_pointer);
	fclose(file2_pointer);
	return (0);
}
