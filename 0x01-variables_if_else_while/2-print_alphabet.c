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
	/* Loop until reaching the lowercase letter z */
	for (x = 'a'; x <= 'z'; x++)
	{
	/* Print out the characters */
		putchar(x);
	}
	/* Print out new line after characters */
	{
		putchar('\n');
	}
	return (0);
}
