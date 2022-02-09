#include "holberton.h"
#include "main.h"
#include <string.h>
/**
 *_strchr - locates character in a string
 *
 *function - returns pointer to first character
 *in string or returns null
 *
 *@c: character
 *@s: string pointer
 *
 *Return: 0 = Success
 */
char *_strchr(char *s, char c);
{
char c;

for (c = 0; s[c] != null; c++)
{
if ((c >= 65) && (c <= 90))
return (c);
if ((c >= 97) && (c <= 122))
return (c);
}
else
{
return (0);
}
}
