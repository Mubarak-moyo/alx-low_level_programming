#include <stdio.h>

/**
 * main - This prints the firts 98 fibonacci numbers.
 *
 * Return: 0(Success)
 */
int main(void)
{
	int n = 98;
	int a = 1;
	int b = 2;
	int i;
	int c;

	printf("%d, %d, ", a, b);

	for (i = 3; i <= n; i++)
	{
	c = a + b;
	a = b;
	b = c;

	if (i < n)
	{
	printf("%d, ", c);
	}
	else
	{
	printf("%d\n", c);
	}
	}
	
	return (0);
}
