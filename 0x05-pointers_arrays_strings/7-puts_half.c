#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - function that prints the second half of a string followed by a new line.
 * @str: The string to be inputted.
 */
void puts_half(char *str)
{
	int k = strlen(str);
	int m;
	int i;

	if (k % 2 == 0)
	{
	m = k / 2;
	}
	else
	{
	m = (k - 1) / 2;
	}
	for (i = m; str[i] != '\0'; i++)
	{
	putchar(str[i]);
	}

	putchar('\n');
}
