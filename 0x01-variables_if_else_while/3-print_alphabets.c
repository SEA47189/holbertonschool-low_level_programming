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
	int a, b;
	/* This will print out alphabet in lowercase */
	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}
	/* This will print out alphabet in uppercase */
	for (b = 65; b <= 90; b++)
	{
		putchar(b);
	}
	{
	/* Prints a new line after completing */
		putchar('\n');
	}
	return (0);
}
