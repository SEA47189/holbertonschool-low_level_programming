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
	int a;
	int b;
	/* Loop until all numbers of base 16 */
	for (a = 0; a <= 9; a++)
	{
		/* Print numbers */
		putchar(a + '0');
	}
	for (b = 97; b <= 102; b++)
	{
		/* Print letters */
		putchar(b);
	}
	{
		/* Print a new line */
		putchar('\n');
	}
	return (0);
}
