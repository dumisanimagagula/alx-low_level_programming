#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: string to copy to
 * @src: string to copy from
 * @n: number of bytes to copy
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		if (i < n)
			dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
