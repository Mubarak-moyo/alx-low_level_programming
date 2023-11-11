#include <ctype.h>
#include "main.h"

/**
 *_isdigit - functions that checks for a digit.
 * @c: The character to check
 *
 * Return: 1 if c is a no or 0 for otherwise.
 */
int _isdigit(int var)
{
	if (isdigit(var))
		return (1);
	return (0);
}
