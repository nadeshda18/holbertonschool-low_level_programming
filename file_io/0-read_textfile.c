#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * read_textfile - reads a text file and prints it to standard output
 * @filename: pointer
 * @letters: number of letters
 *
 * Return: 0 if fails or filename is NULL, number of characters printed if success
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t open_file;
	ssize_t read_file;
	ssize_t write_file;

	open_file = open(filename, O_RDONLY);
	if (open_file == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	read_file = read(open_file, buf, letters);
	write_file = write(STDOUT_FILENO, buf, read_file);

	free(buf);
	close(open_file);
	return(write_file);
}
