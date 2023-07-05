#include "main.h"
#include <stdio.h>
/**
 * _strspn - lenght of a prefix substring
 * @s: pointer
 * @accept: from in bytes
 *
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	int count = 0, flag;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			break;
	}
	return (count);
}
