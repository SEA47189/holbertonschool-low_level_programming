#include <stdio.h>
/**
 * main - entry point
 *
 * Function_name - putchar
 *
 * Return: 0 = Success
 */
int main(void)
{
	int n;
	/* Loop single digit base 10 numbers */
	for (n = 48; n <= 57; n++)
	{
		/* Print out numbers */
		putchar(n);
	}
	/* Print out a new line */
	{
		putchar('\n');
	}
	return (0);
}
