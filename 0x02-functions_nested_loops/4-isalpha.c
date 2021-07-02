#include <stdio.h>
#include "holberton.h"
/**
 *_isalpha - checks for upper and lowercase alphabet
 *
 *@c: character
 *
 *Return: 1 if lowercase 0 if not
 *
 */
int _isalpha(int c)
{
	/* Checks for lowercase and uppercase letter */
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}
