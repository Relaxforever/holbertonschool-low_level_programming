#include "holberton.h"

/**
* swap_int - reset any value to 98
* @a : takes the value and changes it
* @b : takes second pointer
**/
void swap_int(int *a, int *b)
{
	int swapA = *a;
	int swapB = *b;
	*a = swapB;
	*b = swapA;
}
