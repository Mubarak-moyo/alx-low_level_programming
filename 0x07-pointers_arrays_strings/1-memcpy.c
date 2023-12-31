#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: A pointer to the destination memory area,
 * @n: The number of bytes to copy.
 * @src: This is the memory area in which the bytes are copied..
 *
 * Return: A pointer to (dest).
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	*(dest + i) =  *(src + i);

	return (dest);
}
