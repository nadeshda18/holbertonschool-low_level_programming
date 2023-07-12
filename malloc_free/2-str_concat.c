#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - join two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *ptr = malloc(sizeof(char) * strlen(s1) * strlen(s2) + 1);

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		ptr[i++] = s2[j];
	}
	return (ptr);
}
