#include "holberton.h"
/**
* print_square - print the numbers from 0 to 9
*@size : takes the integer given
*/
void print_square(int size)
{
	int tmp;
	int tmp2;
	int space = 32;
	int shared = 35;

	if (size > 0)
	{
		for (tmp = 0; tmp < size; tmp++)
		{
			_putchar(space);
			for (tmp2 = 0; tmp2 < size; tmp2++)
			{
				_putchar(shared);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
