#include "holberton.h"
#include <string.h>
/**
 **_strncat - creates a new string by combining two
 *
 *@dest: string destination
 *
 *@src:  string source
 *
 *@n: number of characters to append
 *
 *Return: 0 = Success
 */
char *_strncat(char *dest, char *src, int n)
{

char *new;
int length;
int t;
int p;

new = dest;

length = strlen(dest) - 1;

for (t = 0; t <= length; t++)
{
dest++;
}
p = length + n;
while ((t >= length)&&(t <= p))
{
if (*src == '\0')
{
break;
}
*dest = *src;
dest++;
src++;
t++;
}
return (new);
}
