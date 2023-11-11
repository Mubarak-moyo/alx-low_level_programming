#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - function that prints a string in reverse followed by a new line.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int j = strlen(s);
	int i;

	for (i = j - 1; i >= 0; i--)
	{
	putchar(s[i]);
	}

	putchar('\n');
}
