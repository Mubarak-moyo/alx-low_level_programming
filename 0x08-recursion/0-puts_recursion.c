#include "main.h"

/**
 * _puts_recursion - This prints a string, followed by a new line.
 *
 * @s: The string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
