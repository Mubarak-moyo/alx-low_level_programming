#include "main.h"
void jack_bauer(void)
{
	int hours, minutes;
	for (hours = 0; hours < 24; hours++)
	{
	for (minutes = 0; minutes < 60; minutes++)
	{
	int hr1 = hours / 10;
	int hr2 = hours % 10;
	int m1 = minutes / 10;
	int m2 = minutes % 10;

	_putchar('0' + hr1);
	_putchar('0' + hr2);
	_putchar(':');
	_putchar('0' + m2);
	_putchar('0' + m2);
	_putchar('\n');
	}
	}
}
