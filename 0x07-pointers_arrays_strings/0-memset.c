#include "main.h"
#include <string.h>
/**
 *_memset -  function fills memory with constant byte
 *
 *function - to fill a block of memory with
 *a given value
 *
 *@n: the number of bytes to be filled
 *@b: the constant value
 *@s: starting address
 *
 *Return: 0 = Success
 */
char *_memset(char *s, char b, unsigned int n)
{

int a;

for (a = 0; n > 0; a++)
n--;
{
s[a] = b;
}
{
return (s);
}
}
