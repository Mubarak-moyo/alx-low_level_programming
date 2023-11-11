#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - This functions prints specific natural numbers.
 * @n: The number to be printed.
 */
void print_to_98(int n)
{
	printf("%d", n);

	while (n != 98)
	{
	printf(", %d", n += (n < 98) ? 1 : -1);
	}

	printf("\n");
}
