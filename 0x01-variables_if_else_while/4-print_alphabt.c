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
	/* Loop to print out lowercase alphabet */
	for (n = 'a'; n <= 'z'; n++)
	{
/* Condition to loop, letters not to print */
		if (n != 'e' && n != 'q')
		{
/* Print characters */
			putchar(n);
		}
	}
/* Print a new line */
	{
		putchar('\n');
	}
	return (0);
}
