#include "main.h"

/**
 * print_diagonal - Draw a diagonal line in the terminal
 * @n: The number of times the cahracter '\' should be printed.
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int spaces = 0;

	while (spaces < n)
	{
	int i;

	for (i = 0; i < spaces; i++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	spaces++;
	}
	}
}
