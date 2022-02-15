#include "main.h"
/**
 *print_last_digit - prints last digit of given number
 *
 *@n: number input
 *
 *Return: 0
 */
int print_last_digit(int n)
{
	/* Loop to find last digit of number */
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
