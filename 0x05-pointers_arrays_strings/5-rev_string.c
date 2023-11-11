#include "main.h"
#include <string.h>

/**
 * rev_string - function that reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int k = strlen(s);
	int i, j;
	char m;

	for (i = 0, j = k - 1; i < j; i++, j--)
	{
	m = s[i];
	s[i] = s[j];
	s[j] = m;
	}
}
