#include <stdio.h>

/**
 * main - Prints all arguments it recieves.
 * @argc: Number of command line arguments.
 * @argv: Array containing command line arguments.
 * Return: 0(Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
