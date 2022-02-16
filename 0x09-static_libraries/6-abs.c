#include "holberton.h"
#include "main.h"
/**
 *_abs - computes absolute value
 *
 *@n: number input
 *
 *Return: 0
 */
int _abs(int n)
{
	/* Find the absolute value of given number */
	if (n > 0)
		n = n;
	if (n < 0)
		n = (n * -1);
	if (n == 0)
		n = n;
	return (n);
}
