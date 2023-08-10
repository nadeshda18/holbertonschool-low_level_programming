#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - copy contents of a file to another
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: (0) if success, if not STDERR
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, buffer_limit = 1024, write_limit = 0;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
				S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_from), exit(99);
	}
	while (buffer_limit == 1024)
	{
		buffer_limit = read(file_from, buffer, 1024);
			if (buffer_limit == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
				exit(98);
			}
		write_limit = write(file_to, buffer, buffer_limit);
		if (write_limit < buffer_limit)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
	return (0);
}
