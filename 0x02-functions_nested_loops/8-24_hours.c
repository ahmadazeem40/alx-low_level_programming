#include "main.h"

/**
 * jack_bauer - print every minute in the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hour = 0;
	int minute;

	while (hour < 24)
	{
	minute = 0;
	while (minute < 60)
	{
	_putchar((hour / 10) + 48);
	_putchar((hour % 10) + 48);
	_putchar(':');
	_putchar((minute / 10) + 48);
	_putchar((minute % 10) + 48);
	_putchar('\n');
	minute++;
	}
	hour++;
	}
}
