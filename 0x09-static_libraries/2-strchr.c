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
char *_strchr(char *s, char c)
{

for (c = 0; s[c] != '\0'; c++)
{
if ((c >= 65) && (c <= 90))
if ((c >= 97) && (c <= 122))
{
return (0);
}
}
}
