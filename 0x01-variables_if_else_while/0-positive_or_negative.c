#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * function_name - if/else
 *
 * Return: 0 = Success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
		/* This will execute if true */
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
		/* This will execute if first condition not true */
	{
		printf("%d is positive\n", n);
	}
	if (n == 0)
		/* This will execute if both not true */
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
