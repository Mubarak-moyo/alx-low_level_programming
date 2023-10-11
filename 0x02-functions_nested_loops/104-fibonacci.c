#include <stdio.h>

/**
 * main - This prints the firts 98 fibonacci numbers.
 *
 * Return: 0(Success)
 */
int main(void)
{
	unsigned int a = 1;
	unsigned int b = 2;

	printf("1,2");

	for (int i = 2; i < 98; i++)
	{
	unsigned int next = a + b;

	if (i < 97)
	{
		printf(", %u", next);
	}
	else
	{
		printf(", %u\n", next);
	}
	a = b;
	b = next;
	}

	return (0);
}
