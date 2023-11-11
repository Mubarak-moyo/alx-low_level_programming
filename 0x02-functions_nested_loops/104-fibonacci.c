#include <stdio.h>

/**
 * main - This prints the firts 98 fibonacci numbers.
 *
 * Return: 0(Success)
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int c;
	int i;

	printf("%u, %u, ", a, b);

	for (i = 3; i <= 98; i++)
	{
	c = a + b;
	a = b;
	b = c;

	if (i < 98)
	{
	printf("%u, ", c);
	}
	else
	{
	printf("%u\n", c);
	}
	}

	return (0);
}
