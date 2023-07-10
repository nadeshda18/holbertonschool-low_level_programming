#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a new string
 * @str: pointer to the string with char
 *
 * Return: (NULL) if failed or the pointer
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	char *c;
	int j;

	while (str[i] != '\0')
		i++;

	c = malloc(sizeof(char) * (i + 1));

	{
		if (c == NULL)
			return (NULL);
	}

	for (j = 0; str[j]; j++)
		c[j] = str[j];
	return (c);
}
