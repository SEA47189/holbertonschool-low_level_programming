#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*_strdup - duplicate a string
*
*@str: character string
*
*Function: creates a duplicate of a given string
*
*Return: 0 - Success
*/
char *_strdup(char *str)
{
int len = 0;
char *b;
{
if (str == NULL)
return (NULL);
{
while (str[len])
len++;
b = malloc(len + 1);
}
if (b == NULL)
return (NULL);
len = 0;
{
while (str[len])
b[len] = str[len];
len++;
}
{
b[len] = '\0';
return (b);
}
}
}
