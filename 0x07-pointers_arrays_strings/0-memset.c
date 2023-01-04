#include "main.h"

/**
 * _memset - fills memory with a constant byte n amount of times
 * @s: pointer that has the addres of the memory to fill
 * @b: constant byte that will be written int the memory
 * @n: amount of times the byte will be written into memory
 * Return: addres of the memory where the byte was written
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
