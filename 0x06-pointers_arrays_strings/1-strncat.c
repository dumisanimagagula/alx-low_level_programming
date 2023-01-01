#include "main.h"

/**
 * _strcat - append src to the dest string
 * @dest: string to append by src
 * @src: string to append to dest
 * @n: number of bytes to append
 * Return: address of dest
 */
char *_strcat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j];
		if (src[j] == '\0')
			j = n;
	}
	return (dest);
}
