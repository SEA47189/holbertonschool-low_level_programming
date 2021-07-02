#include <stdio.h>
#include "holberton.h"
/**
 *jack_bauer - Print every minute of the day for 24 hours
 *
 *@h: hour
 *
 *@m: minute
 *
 *Return: Void
 *
 */
void jack_bauer(void)
{
	int h;
	int m;
	/* Print hours and minutes */
	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
