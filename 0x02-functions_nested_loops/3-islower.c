#include "main.h"

/**
 * _islower - This function checks for lowercase characters.
 * @c: The letter we are checking.
 *
 * Return: The number indicator.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
