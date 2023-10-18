/**
 * _strncpy - function that concatenate two strings.
 * @dest: The resulting location of the string.
 * @src: the source string.
 * @n: the number of bytes
 *
 * Return: A pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;

	while (n > 0 && *src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	n--;
	}

	while (n > 0)
	{
	*dest = '\0';
	dest++;
	n--;
	}

	return (result);
}
