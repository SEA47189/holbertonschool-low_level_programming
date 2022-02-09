#include "holberton.h"
#include "main.h"
#include <string.h>
/**
 *_memcpy -  copies memory area from src to dest
 *
 *function - to copy from src to dest and return
 *pointer to dest
 *
 *@n: memory area copied
 *@src: memory area source
 *@dest: memory area destination
 *
 *Return: 0 = Success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
for (n = 0; n < 100; n++)
{
dest[n] = src[n];
}
{
return (0);
}
}
