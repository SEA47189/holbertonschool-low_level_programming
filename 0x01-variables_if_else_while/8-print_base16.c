#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - entry point
 *
 *function name - putchar
 *
 *Description - Void = no value
 *
 *Return: 0 - Success
 *
 */
int main(void)
{
	int a = 0x30;
	int b = 0x61;
	/* This will print out alphabet in lowercase */
	for (a = 30; a <= 39; a++)
	{
		putchar('0' + a);
	}
	/* This will print out alphabet in uppercase */
	for (b = 61; b <= 66; b++)
	{
		putchar('0' + b);
	}
	{
		/* Prints a new line after completing */
		putchar('\n');
	}
	return (0);
}
