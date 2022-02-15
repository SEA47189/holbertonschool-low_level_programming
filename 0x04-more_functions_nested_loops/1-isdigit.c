#include "holberton.h"
#include "main.h"
/**
 * _isdigit - finds digit
 *
 * Function_name - putchar
 *
 * putchar - prints numbers
 *
 *@c: character to print
 *
 * Return: 0 = Success
 */
int _isdigit(int c)

{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
