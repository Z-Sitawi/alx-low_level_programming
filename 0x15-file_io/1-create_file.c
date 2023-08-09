#include "main.h"
/**
 * create_file -  It creates a file and writes text content to it
 *
 * @filename: a pointer to the name of the file to create.
 * @text_content:  a NULL terminated string to write to the file.
 *
 * Returns: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t fd; /* A file descriptor for the opened file */
	int rw; /* return value of the write function */
	int len = 0; /* length of the text_content string */

	/* Check if the file was opened successfully */
	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
	}

	/* Open the file for writing (create if doesn't exist) */
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	/* write content to the file*/
	rw = write(fd, text_content, len);

	/*  checks if fd or rw fails */
	if (fd == -1 || rw == -1)
		return (-1);

	close(fd);
	return (1);
}
