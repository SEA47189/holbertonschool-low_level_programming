#include "holberton.h"
/**
 *_islower - checks for lowercase character
 *
 *@c:character
 *
 *Return: 1 if lower 0 if not
 *
 */
int _islower(int c)
{

	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}
