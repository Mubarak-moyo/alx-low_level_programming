#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: the string to search.
 * @accept: The string containing the characters to match.
 *
 * Return:  the n of bytes in the first segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s)
	{
	int match = 0;
	char *temp = accept;

	while (*temp)
	{
	if (*s == *temp)
	{
	count++;
	match = 1;
	break;
	}
	temp++;
	}

	if (!match)
	return (count);

	s++;
	}

	return (count);
}
