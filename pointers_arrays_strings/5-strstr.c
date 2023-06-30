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
	int i;
	int j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
			if (needle[j] == haystack[i])
			{
			j++;
			return (needle);
			}
	}
	return (NULL);
}
