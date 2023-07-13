#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: unsigned integer
 *
 * Return: (NULL) at failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n >= strlen(s2))

	ptr = malloc(strlen(s1) + strlen(s2) + 1);

	else

		ptr = malloc(strlen(s1) + n + 1);

	if (ptr == NULL)
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
