#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalize all words
 * @s: pointer
 *
 * Return: s
 *
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if((s[i] >= 'a' && s[i] <= 'z'))
				s[i] = s[i] - 32;
			continue;
		}
		if (s[i]==' ')
		{
			++i;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
				continue;
			}
		}
	}
	return (s);
}
