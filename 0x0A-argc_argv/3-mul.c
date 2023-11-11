#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that multiplies 2 numbers.
 * @argc: Number of command line arguments.
 * @argv: Array containing command line arguments.
 * Return: 0(Success).
 */
int main(int argc, char *argv[])
{
	int digit1;
	int digit2;
	int result;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

	digit1 = atoi(argv[1]);
	digit2 = atoi(argv[2]);

	result = digit1 * digit2;

	printf("%d\n", result);

	return (0);
}
