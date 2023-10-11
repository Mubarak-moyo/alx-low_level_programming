#include "main.h"

/**
 * jack_bauer - The time countdown
 *
 * This function prints a 24-hour time countdown in "hh:mm" format.
 * It iterates through time.
 */
void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours < 24; hours++)
	{
	for (minutes = 0; minutes < 60; minutes++)
	{
	int h1 = hours / 10;
	int h2 = hours % 10;
	int m1 = minutes / 10;
	int m2 = minutes % 10;

	_putchar('0' + h1);
	_putchar('0' + h2);
	_putchar(':');
	_putchar('0' + m1);
	_putchar('0' + m2);
	_putchar('\n');
	}
	}
}
