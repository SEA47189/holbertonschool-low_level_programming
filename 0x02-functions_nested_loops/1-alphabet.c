#include "holberton.h"
/**
 * print_alphabet - prints the lowercase alphabet followed by new line
 *
 * Return: void
 */
void print_alphabet(void)
{
	int i;
	/*Loop until reaching letter z*/
	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	{
		_putchar('\n');
	}
}
