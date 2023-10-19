#include "main.h"

/**
 * _strncat - function that concatenate two strings.
 * @dest: The resulting location of the string.
 * @src: the source string.
 * @n: the amount of bytes.
 *
 * Return: the pointer result.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest != '\0')
	{
	dest++;
	}

	while (*src != '\0' && n > 0)
	{
	*dest = *src;
	dest++;
	src++;
	n--;
	}

	*dest = '\0';

	return (result);
}
