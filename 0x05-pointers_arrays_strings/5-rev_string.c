#include "main.h"
#include <string.h>
/**
 *rev_string - reverses string
 *
 *@s: string given
 *
 *function_name - putchar
 *
 *Return - Void
 */
void rev_string(char *s)
{
	int n, length;
	char temp, *first, *second;

	length = strlen(s);
	first = s;
	second = s;

	for (n = 0; n < length - 1; n++)
	{
		second++;
	}
	for (n = 0; n < length / 2; n++)
	{
		temp = *second;
		*second = *first;
		*first = temp;

	first++;
	second--;
	}
}
