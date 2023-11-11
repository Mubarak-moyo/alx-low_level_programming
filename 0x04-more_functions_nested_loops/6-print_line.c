#include "main.h"

/**
 * print_line - Draws a straight line.
 * @n: The number of times '-' will be printed.
 */
void print_line(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	while (n > 0)
		{
		_putchar('_');
		n--;
		}
	_putchar('\n');
	}
}
