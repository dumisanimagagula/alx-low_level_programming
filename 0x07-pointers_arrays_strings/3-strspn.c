#include <stdio.h>
#include "main.h"

/**
 * _strspn - gets the lenght of a prefix substring
 * @s: pointer that contains the string to be evaluated
 * @accept: pointer that contains the substring that will condition s
 * Return: length of s which contains characters in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}

	return (i);
}
