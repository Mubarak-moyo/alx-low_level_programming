#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to search for.
 *
 * Return: A pointer to the byte or NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
	char *temp = accept;

	while (*temp)
	{
	if (*s == *temp)
	return (s);
	temp++;
	}

	s++;
	}

	return (NULL);
}
