#include "holberton.h"
/**
* more_numbers - print the numbers from 0 to 9
*
*/
void more_numbers(void)
{
	int tmp;
	int numbers;

	for (tmp = 0; tmp < 10; tmp++)
	{
		for (numbers = 0; numbers <= 14; numbers++)
		{
			if (numbers >= 10)
			{
				_putchar((numbers / 10) + '0');
			}
			_putchar((numbers % 10) + '0');
		}
		_putchar('\n');
	}
}
