#include <stdio.h>

/**
 * main - This calculates and prints the fibonacci numbers.
 *
 * Return: 0 (Success)
 */
int main(void)
{
int n = 50;
long fib[50];

fib[0] = 1;
fib[1] = 2;

int i;
for (int i = 2; i < n; i++)
{
	fib[i] = fib[i - 1] + fib[i - 2];
}

for (int i = 0; i < n; i++)
{
	printf("%lld", fib[i]);
	if (i < n - 1)
	{
		printf(", ");
	}
}
printf("\n");

return (0);
}
