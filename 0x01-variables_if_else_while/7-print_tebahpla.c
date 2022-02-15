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
	char x;
	/* Loop backwards until reaching letter a */
	for (x = 'z'; x >= 'a'; x--)
	{
		/* Print out letters */
		putchar(x);
	}
	/* Print out a new line */
	{
		putchar('\n');
	}
	return (0);
}
