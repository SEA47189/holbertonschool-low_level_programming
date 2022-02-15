#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Function_name - printf
 *
 * Return: 0 = Success
 */
int main(void)
{
	int n, x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Find the last digit of n */
	x = n % 10;
	/* If last digit greater than 5 */
	if (x > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, x);
	}
	/* If last digit is less than 6 and not 0 */
	else if (x < 6 && x != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
	}
	/* If last digit is 0 */
	if (x == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, x);
	}
	return (0);
}
