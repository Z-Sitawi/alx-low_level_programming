#include "main.h"
/**
 * main - copies the content of a file to another file
 *
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0 on success, -1 on failure
 */
int main(int argc, char *argv[])
{
	FILE *file_from, *file_to;
	char buff[1024];
	int bytesRead, bytesWritten;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	file_from = fopen(argv[1], "r");

	if (file_from == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = fopen(argv[2], "w");

	if (file_to == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((bytesRead = fread(buff, sizeof(char), sizeof(buff), file_from)) > 0)
	{
		bytesWritten = fwrite(buff, sizeof(char), bytesRead, file_to);
		if (bytesWritten != bytesRead)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (fclose(file_from) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileno(file_from));
		return (100);
	}
	else if (fclose(file_to) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileno(file_to));
		return (100);
	}

	return (0);
}
