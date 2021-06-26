#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - entry point
 *
 *function name - if/else
 *
 *Description - Void = no value
 *
 *Return: 0 - Success
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
	/* This will execute if condition returns true */
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
	/*This will execute if conditin returns true*/
		printf("%d is positive\n", n);
	}
	if (n == 0)
	{
	/*This will execute if neither statements met condition*/
		printf("%d is zero\n", n);
	}
	return (0);
}
