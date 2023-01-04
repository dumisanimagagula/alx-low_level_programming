#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of diagonals
 * @a: pointer to an array
 * @size: size of the matrix
 * Return:void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int c = 0;
	int d = 0;

	for (i = 0; i < size; i++)
	{
		c += a[i];
		d += a[size - i - 1];
		a += size;
	}
	printf("%d, ", c);
	printf("%d\n", d);
}
