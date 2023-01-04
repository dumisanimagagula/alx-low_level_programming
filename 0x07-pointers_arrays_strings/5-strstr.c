#include "main.h"

/**
 * _strstr - locates a substring within a string
 * @haystack: pointer that contains the address of the string to be evaluated
 * @needle: pointer that contains the string to evaluate @haystack
 * Return: address of the located string in haystack is no substring is found then return NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *src = haystack;
		char *sub = needle;

		while (*haystack && *sub && *haystack == *sub)
		{
			haystack++;
			sub++;
		}
		if (!*sub)
			return (src);
		haystack = src + 1;
	}
	return (0);
}
