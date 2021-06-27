#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - entry point
 *
 *function name - printf
 *
 *Description - printf = print numbers
 *
 *Return: 0 - Success
 *
 */
int main(void)
{
	int n;
	/* This will print out single digit numbers */
	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	{
	/* Prints a new line after completing */
		printf("\n");
	}
	return (0);
}
