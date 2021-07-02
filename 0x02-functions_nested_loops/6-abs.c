#include "holberton.h"
/**
 *_abs - Computes the absolute value
 *
 *@n: number
 *
 *Return: 0
 *
 */
int _abs(int n)
{
	/* Checks for absolute value */
	if (n > 0)
		n = n;
	if (n < 0)
		n = (n * -1);
	if (n == 0)
		n = n;
	return (n);
}
