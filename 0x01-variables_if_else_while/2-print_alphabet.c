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
	/* This will print out alphabet in lowercase */
	for (n = 97; n < 122; n++)
	{
		putchar(n);
	}
	{
	/* Prints a new line after completing */
		putchar('\n');
	}
	return (0);
}
