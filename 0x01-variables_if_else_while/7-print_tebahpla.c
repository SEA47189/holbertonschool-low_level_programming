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
	int a;
	/* This will print alphabet in reverse */
	for (a = 122; a >= 97; a--)
	{
		putchar(a);
	}
	{
	/* Prints a new line after completing */
		putchar('\n');
	}
	return (0);
}
