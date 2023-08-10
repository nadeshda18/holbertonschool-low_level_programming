#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * append_text_to_file - at the end of the file
 * @filename: pointer to
 * @text_content: string
 *
 * Return: (1) on success, (-1) on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i;
	int new_file;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (i = 0; text_content[i] != '\0'; i++)

	new_file = open(filename, O_WRONLY | O_APPEND);

	if (new_file == -1)
		return (-1);

	write(new_file, text_content, i);

	close(new_file);

	return (1);
}
