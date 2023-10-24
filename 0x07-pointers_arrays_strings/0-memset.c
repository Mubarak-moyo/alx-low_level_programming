/**
 * _memset - This fills the memory with a constant byte.
 * @s: A pointer to the memory area that is to be filled.
 * @b: the constant byte.
 * @n: the number of bytes.
 *
 * Return: A pointer to memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n > 0)
	{
	*s = b;
	s++;
	n--;
	}

	return (start);
}
