#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *
 *function - prints filenme followed
 *by a new line
 *
 *printf: prints filename
 *
 *@argc: counter points to array
 *@argv: array of counter
 *
 *Return: 0 = success
 */
int main(int argc, char **argv)
{
int a;

for (a = 1; a < argc; a++)
{
printf("%s\n", argv[0]);
}
{
return (a);
}
}
