#include "main.h"
#include <stdio.h>
/**
 *main - entry or starting point for function
 *printf: prints filename
 *
 *Function: counts arguments
 *
 *@argc: counter points to array
 *@argv: array of counter
 *
 *Return: 0 = Success
 */
int main(int argc, char *argv[])
{
int c;
{
for (c = 0; c < argc; c++)
printf("%s\n", argv[c]);
return (0);
}
}
