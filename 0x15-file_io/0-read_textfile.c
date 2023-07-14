#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: num_of_bytes actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fdd, num_of_bytes, tt;

	fdd = open(filename, O_RDONLY);
	if (fdd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	tt = read(fdd, buff, letters);
	num_of_bytes = write(STDOUT_FILENO, buff, tt);

	free(buff);
	close(fdd);
	return (num_of_bytes);
}
