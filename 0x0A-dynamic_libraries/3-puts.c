#include "main.h"
#include <string.h>
/**
 *_puts - string to stdout
 *
 *@str: string given
 *
 *function_name - putchar
 *
 *Return: 0 = success
 */
void _puts(char *str)
{
  int a;

  for (a = 0; str[a] != '\0'; a++)
    {
      _putchar(str[a]);
    }
  {
    _putchar('\n');
  }
}
