#include "main.h"
#include <stdio.h>

/**
 * puts - prints character of a string as specified.
 * @str: The string inputted.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
	putchar(str[i]);
	if (str[i] == '\0')
	{
	break;
	}
	putchar(str[i]);
	}

	putchar('\n');
}
