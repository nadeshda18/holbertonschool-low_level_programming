#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_file - a funtion to create a file
 * @filename: pointer to 2
 * @text_content: string
 *
 * Return: (1) if success or (-1) if fail
 *
 */
int create_file(const char *filename, char *text_content)
{
	int i;
	int new_file;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (i = 0; text_content[i] != '\0'; i++);

		new_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (new_file == -1)
		return (-1);

	write(new_file, text_content, i);

	return (1);
}
