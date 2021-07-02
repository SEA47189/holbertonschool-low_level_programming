#include "holberton.h"
/**
 *print_last_digit - Prints last digit of a number
 *
 *@n: number
 *
 *Return: 0
 *
 */
int print_last_digit(int n)
{
	/* Print last digit */
	if (n > 0)
	{
		n = (n % 10);
		_putchar(n + '0');
	}
	if (n < 0)
	{
		n = (n * -1);
		n = (n % 10);
		_putchar(n + '0');
	}
	if (n == 0)
	{
		n = (n % 10);
		_putchar(n + '0');
	}
	return (n);
}
