#include "holberton.h"
/**
 * print_alphabet_x10 - prints the lowercase alphabet 10 times
 *
 *Return: void
 */
void print_alphabet_x10(void)
{
	int a;
	int count = 10;
	/*Loop string 10 time */
	for (count=0; count<10; count++)
	{
		for (i=97; i<= 122; i++)
		_putchar(i);
		_putchar('\n');
	}

}
