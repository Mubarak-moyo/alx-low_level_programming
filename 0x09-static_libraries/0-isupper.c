#include "main.h"
#include <ctype.h>

/**
 * _isupper - Checks character for uppercase
 * @c: The character to check.
 *
 * Return: 1 for uppercase, 0 for lowercase.
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	return (0);
}
