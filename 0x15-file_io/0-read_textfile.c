#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: a pointer to the file
 * @letters: the number of letters it should read and print
 *
 * Return: The actual number of letters it could read and print (Success).
 * return 0 if filename is NULL and if write fails or
 * does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff; /* A buffer to store the read content */
	ssize_t fd; /* A file descriptor for the opened file */
	ssize_t nl; /* total number of bytes written to the standard output */
	ssize_t nb; /* number of bytes read from the file into the buffer */

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0); /* Return 0 if the file cannot be opened */

	/* Allocate memory for the buffer*/
	buff = malloc(sizeof(char) * letters);

	/* Read 'letters' bytes from the file into the buffer*/
	nb = read(fd, buff, letters);

	/* Write the buffer content to the standard output */
	nl = write(STDOUT_FILENO, buff, nb);

	free(buff); /* Free the allocated memory */
	close(fd); /* Close the file */

	/* Return the number of bytes written to the standard output*/
	return (nl);
}
