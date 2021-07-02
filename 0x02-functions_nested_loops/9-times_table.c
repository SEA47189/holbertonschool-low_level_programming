#include "holberton.h"
/**
 *times_table - Prints the 9 times table
 *
 *Return: void
 *
 */
void times_table(void)
{
	int a;
	int b;
	int c;
	/* Print times table with spaces, commas, and new line */
	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = (a * b);
			if (c < 10)
			{
				if (b > 10)
					_putchar(',');
					_putchar(' ');
				_putchar(c + '0');
			}
			else
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
