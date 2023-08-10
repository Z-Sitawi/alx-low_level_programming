#include "main.h"
/**
 * append_text_to_file - It appends text at the end of a file.
 *
 * @filename: a pointer to the name of the file.
 * @text_content: a NULL terminated string to append to the file.
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fd; /* A file descriptor for the opened file */
	int rw; /* return value of the write function */
	int len = 0; /* length of the text_content string */

	/* Check if the file was opened successfully */
	if (filename == NULL)
		return(-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	/* Open the file for appending (do not create file if doesn't exist) */
	fd = fopen(filename, "a");

	/* write content to the file*/
	rw = fwrite(text_content, sizeof(char), len, fd);
	if (rw != len)
	{
		fclose(fd);
		return (-1);
	}

	fclose(fd);
	return (1);
}
