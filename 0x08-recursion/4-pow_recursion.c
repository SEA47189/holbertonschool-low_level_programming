#include "main.h"
#include <string.h>
/**
 *_pow_recursion - power of a number
 *
 *function - to calculate the power of
 *a given number
 *
 *@x: number
 *
 *@y: power of number
 *
 *Return: 0 = Success
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y % 2 == 0)
{
return (x*_pow_recursion(x, y-1);
}
{
return (0);
}
}
