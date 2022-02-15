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
	/* Loop for single digit numbers */
	for (n = 0; n <= 9; n++)
	{
		/* Print numbers */
		putchar(n + '0');
		if (n < 9)
		{
/* Print comma */
			putchar(',');
/* Add space after each number and comma */
			putchar(' ');
		}
	}
/* Add new line */
	putchar('\n');
	return (0);
}
