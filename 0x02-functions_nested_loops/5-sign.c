#include "main.h"
/**
 *print_sign - Checks for the sign of a number or zero
 *
 *@n: number
 *
 *Return: 1,0, or -1
 */
int print_sign(int n)
{
	/* Loop and check numbers */
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
