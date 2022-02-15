#include "main.h"
#include <string.h>
/**
 *puts2 - prints every other character
 *
 *@str: - given string
 *
 *Return: 0 - success
 */
void puts2(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n += 2)
	{
		_putchar(str[n]);
	}
	{
		_putchar('\n');
	}
}
