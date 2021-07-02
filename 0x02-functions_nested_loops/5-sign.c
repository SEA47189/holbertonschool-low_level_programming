#include "holberton.h"
/**
 *print_sign - Checks for signs of a number
 *
 *@n: number
 *
 *Return: 1, -1, or 0
 *
 */
int print_sign(int n)
{
	/* Checks for greater than zero */
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	/* Checks for less than zero */
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	/* Checks for zero */
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	return (0);
}
