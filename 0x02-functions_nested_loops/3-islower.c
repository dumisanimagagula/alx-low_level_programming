#include "main.h"

/**
 * _islower - Code entry point
 *
 * Description: This program checks for lowercase character.
 *
 * @c: The integer value ittake
 *
 * Return: 0
 */
int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		/* Refer in c*/
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
