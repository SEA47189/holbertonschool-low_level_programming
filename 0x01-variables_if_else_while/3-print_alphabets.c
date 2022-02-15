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
	char n;
	/* Loop to print lower case alphabet */
	for (n = 'a'; n <= 'z'; n++)
	{
	/* Print out characters */
	putchar(n);
	}
	/* Loop to print upper case alphabet */
	for (n = 'A'; n <= 'Z'; n++)
	{
	/* Print out characters */
	putchar(n);
	}
	/* Print out a new line */
	{
		putchar('\n');
	}
	return (0);
}
