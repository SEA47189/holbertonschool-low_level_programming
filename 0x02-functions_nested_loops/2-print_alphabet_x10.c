#include "main.h"
/**
 *print_alphabet_x10 - prints alphabet 10 times
 *
 *Return: void
 *
 */
void print_alphabet_x10(void)
{
	int n;
	int count = 10;
	/* Loop until count reaches 10 times */
	for (count = 0; count < 10; count++)
	{
		/* Print alphabet */
		for (n = 97; n <= 122; n++)
		{
			_putchar(n);
		}
		{
			_putchar('\n');
		}
	}
}
