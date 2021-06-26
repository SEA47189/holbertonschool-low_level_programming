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
	int n, x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* Find the last digit of a number */
	x = n % 10;
	if (x > 5)
	{
/* Print if last digit greater than 5 */
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	}
	else if (x < 6 && x != 0)
	{
/* Print if last digit less than 6 and not */
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
	}
	if (x == 0)
	{
/* Print if last digit is equal to 0 */
		printf("Last digit of %d is %d and is 0\n", n, x);
	}
	return (0);
}
