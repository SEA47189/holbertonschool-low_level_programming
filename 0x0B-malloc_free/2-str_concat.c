#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*str_concat - concatenates two strings
*
*@s1: first string
*@s2: second string
*
*Function: combines two given strings
*
*Return: 0 - Success
*/
char *str_concat(char *s1, char *s2)
{
int len = 0;
char *a;
char *b;
{
if (s1 == NULL)
return (NULL);

if (s2 == NULL)
return (NULL);
{
while (s1[len])
len++;
a = malloc(len + 1);
}
{
while (s2[len])
len++;
b = malloc(len + 1);
{
a[len] = b[len];
len++;
}
b[len] = '\0';
return (b);
{
return (0);
}
}
}
}
