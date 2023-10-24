#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: A pointer to the destination memory area,
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to (dest).
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n > 0)
	{
	*dest = *src;
	dest++;
	src++;
	n--;
	}

	return (dest);
}
