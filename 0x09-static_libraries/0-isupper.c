#include "main.h"

/**
 * _isupper - Checks character for uppercase
 * @c: The character to check.
 *
 * Return: 1 for uppercase, 0 for lowercase.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
