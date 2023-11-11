#include "main.h"

/**
 * _isalpha - This checks for alphabetic character.
 *  @c: The letter we are checking.
 *
 *  Return: The number indicator.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
