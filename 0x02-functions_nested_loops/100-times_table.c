#include "main.h"

/**
 * print_times_table - Prints the n times table.
 * @n: The number to be printed.
 */
void print_times_table(int n)
{
	if (n < 0 || n < 15)
	{
	return;
	}

	int i, j, product;

	for (i = 0; i <= n; i++)
	{
	for (j = 0; j <= n; j++)
	{
	product = i * j;

	if (j > 0)
	{
	_putchar(' ');
	}

	if (product < 10)
	{
	_putchar(' ');
	_putchar(' ');
	}
	else if (product < 100)
	{
	_putchar(' ');
	}

	_putchar(product / 100 + '0');
	_putchar((product / 10) % 10 + '0');
	_putchar(product % 10 + '0');

	if (j < n)
	{
	_putchar(',');
	_putchar(' ');
	}
	}
	_putchar('\n');
	}
}
