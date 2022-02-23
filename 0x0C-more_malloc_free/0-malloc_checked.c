#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *malloc_checked - returns pointer to allocated memory
 *
 *@b: memory allocated
 *
 *
 *Function: creates a pointer to memory
 *
 *Return: 0 - Success
 */
void *malloc_checked(unsigned int b)
{
int *p;

p = malloc(b);

if (p == NULL)
exit(98);

if (p != NULL)
return (p);
{
return (0);
}
}
