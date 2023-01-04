#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer that contains the address of the string to be evaluated
 * @accept: pointer that contains the strin to evaluate s
 * Return: address of the first occurrence of acceppt in the string
 */
char *_strpbrk(char *s, char *accept)
{
	int i, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
				return (s + i);
		}
	}
	return (0);
}
