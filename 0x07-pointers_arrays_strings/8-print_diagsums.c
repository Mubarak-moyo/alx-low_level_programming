#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix.
 * @a: the square matrix of integers shown as a 1D array.
 * @size: the size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
	int primary_sum = 0;
	int secondary_sum = 0;
	int i = 0;

	for (i = 0; i < size; i++)
	{
	primary_sum += a[i * size + i];
	secondary_sum += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", primary_sum, secondary_sum);
}
