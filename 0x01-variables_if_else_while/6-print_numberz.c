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
	int n;
	/* This will print out numbers */
	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	{
	/* Prints a new line after completing */
		putchar('\n');
	}
	return (0);
}
