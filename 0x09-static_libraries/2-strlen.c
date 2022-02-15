#include "main.h"
#include <string.h>
/**
 *_strlen - returns length of string
 *
 *@s: character given
 *
 *Return: 0 = Success
 *
 */
int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}
