#include "main.h"
/**
 *_isalpha - checks for uppercase,lowercase letters
 *
 *@c: character
 *
 *Return: 1 if lower 0 if not
 */
int _isalpha(int c)
{
  /* Check for uppercase,lowercase letters */
  if ((c >= 66) && (c <= 90))
    return (1);
  if ((c >= 97) && (c <= 122))
    return (1);
  return (0);
}
