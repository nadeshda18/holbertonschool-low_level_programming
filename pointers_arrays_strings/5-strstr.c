#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring
 * @haystack: to be searched
 * @needle: substring
 *
 * Return: haystack or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			while (haystack[i] == needle[j])
			{
				i++;
				j++;
			}

			if (needle[j] == '\0')
				return (haystack);
		}
	}
	return (NULL);
}
