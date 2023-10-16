#include "main.h"

/**
 * swap_int - This function swaps the value of two integers.
 * @a: A pointer to an integer.
 * @b: A pointer to an integer.
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
