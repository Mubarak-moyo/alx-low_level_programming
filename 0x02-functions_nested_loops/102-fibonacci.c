#include <stdio.h>

/**
 * main - This calculates and prints the fibonacci nums.
 *
 * Return: 0 (Success)
 */
int main(void)
{
int i;
int n = 50;
long fib[50];

fib[0] = 1;
fib[1] = 2;

for (i = 2; i < n; i++)
{
	fib[i] = fib[i - 1] + fib[i - 2];
}

for (i = 0; i < n; i++)
{
	printf("%ld", fib[i]);
	if (i < n - 1)
	{
		printf(", ");
	}
}
printf("\n");

return (0);
}
