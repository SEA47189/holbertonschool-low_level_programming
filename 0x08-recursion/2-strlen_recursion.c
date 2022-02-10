#include "main.h"
#include <string.h>
/**
*_strlen_recursion - prints string length
*
*function - to print the string length
*
*@s: character
*
*Return: 0 = Success
*/
int _strlen_recursion(char *s)
{

if (*s != '\0')
{
s++;
_strlen_recursion(++s);
}
{
return (*s);
}
{
return (0);
}
}
