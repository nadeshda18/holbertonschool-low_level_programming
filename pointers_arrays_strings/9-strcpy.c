#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - copy
 * @dest: buffer
 * @src: pointer
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < src[i]; i++)
	{
	dest[i] != '\0';
	dest[i]++;
	}
	return (dest);
}

