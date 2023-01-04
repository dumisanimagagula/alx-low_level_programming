#include "main.h"

/**
 *leet - changes the chars "aA" "eE" "oO" "tT" "lL"
 *into 4 3 0 7 1 respectively
 *@s: the pointer containin the string
 *
 *Retrun: the string already converted
 */

char *leet(char *s)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == *(s + i))
				*(s + i) = b[j];
		}
	}
	return (s);
}
