#include "holberton.h"
#include <string.h>
/**
 *_strncpy - copies a string
 *
 *@dest: string destination
 *
 *@src:  string source
 *
 *@n: number of characters to append
 *
 *Return: 0 = Success
 */
char *_strncpy(char *dest, char *src, int n)
{

  char d;
  char s;

  for (n = 0; n < 100; n++)
    for (d = 0; d != '\0'; d++)
      for (s = 0; s != '\0'; s++)
	{
	  while (d < s)
	    dest = '\0';
	  d++;
	  {
	    return (dest);
	  }
	  while (s < d)
	    src = '\0';
	  s++;
	  {
	    return (src);
	  }
	}
  {
    return (0);
  }
}
