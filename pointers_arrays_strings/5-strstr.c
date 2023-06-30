#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring
 * @haystack: to be searched
 * @needle: substring
 *
 * Return: haustack or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] == haystack[i])
			{
			i++;
			j++;
			}
			return (haystack);
		}
	}
	return (NULL);
}
