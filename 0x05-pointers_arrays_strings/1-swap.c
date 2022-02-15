#include "main.h"
/**
 *swap_int - swaps to given integers
 *
 *@a: 1st number input
 *
 *@b: 2nd number input
 *
 *Return: 0 = Success
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
