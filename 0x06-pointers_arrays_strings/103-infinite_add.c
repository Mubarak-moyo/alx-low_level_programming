#include <string.h>

/**
 * infinite_add - function that adds two numbers.
 * @n1: the first number.
 * @n2: the second number.
 * @size_r: the size of the buffer.
 * @r: buffer used to store the result.
 *
 * Return: (r) buffer used to store the result.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0;
	int i = 0;
	int j = 0;

	memset(r, 0, size_r);

	while (len1 > 0 || len2 > 0 || carry)
	{
	int digit1 = (len1 > 0) ? n1[--len1] - '0' : 0;
	int digit2 = (len2 > 0) ? n2[--len2] - '0' : 0;

	int sum = digit1 + digit2 + carry;

	carry = sum / 10;

	if (i < size_r - 1)
	{
	r[i++] = (sum % 10) + '0';
	}
	else
	{
	return (0);
	}
	}

	r[i] = '\0';

	j = 0;
	for (i--; i > j; i--, j++)
	{
	char temp = r[i];

	r[i] = r[j];
	r[j] = temp;
	}

	return (r);
}
