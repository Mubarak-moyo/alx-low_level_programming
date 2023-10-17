#include "main.h"

/**
 * _strcpy - Function that copies the string pointed to by src, including the terminating null byte.
 * @dest: The location where the string will be stored.
 * @src: the string to be copied.
 * Return: A pointer to a location called dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}

	dest[i] = '\0';

	return dest;
}
