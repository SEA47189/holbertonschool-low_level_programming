#include "main.h"
#include <strings.h>
/**
 *print_rev - prints string in reverse
 *
 *@s: - string given
 *
 *function_name - putchar
 *
 *Return: void
 */
void print_rev(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		;
	for (a--; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	{
		_putchar('\n');
	}
}
