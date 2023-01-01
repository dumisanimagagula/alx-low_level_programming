#include "main.h"

/**
 * puts2 - prints only one character out of two
 * starting with the first one
 * @str: input string
 * Return: print
 */
void puts2(char *str)
{
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; j < i; j = j + 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
