#include "holberton.h"
#include "main.h"
/**
 * _isupper - finds the upper case letter
 *
 * Function_name - putchar
 *
 * putchar - prints letters
 *
 *@c: character to print
 *
 * Return: 0 = Success
 */
int _isupper(int c)

{
  if ((c >= 65) && (c <= 90))
    {
      return (1);
    }
  if ((c >= 97) && (c <= 122))
    {
      return (0);
    }
  return (0);
}
