#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change for an amount of money.
 * @argv: Array that contains the program command line arguments.
 * @argc: number of command line arguments.
 * Return: 0(Success).
 */
int main(int argc, char *argv[])
{
	int cents;
	int numCoins = 0;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
	printf("0\n");
	return (0);
	}

	while (cents > 0)
	{
	if (cents >= 25)
		cents -= 25;
	else if (cents >= 10)
		cents -= 10;
	else if (cents >= 5)
		cents -= 5;
	else if (cents >= 2)
		cents -= 2;
	else if (cents >= 1)
		cents -= 1;
	numCoins++;
	}

	printf("%d\n", numCoins);

	return (0);
}
