#include "holberton.h"
/**
* print_numbers - print the numbers from 0 to 9
*
*/
void print_most_numbers(void)
{
	int tmp;

	for (tmp = 0; tmp < 10; tmp++)
	{
		if (tmp == 2 || tmp == 4)
		{
			continue;
		}
		_putchar(tmp + '0');
	}
	_putchar('\n');
}
