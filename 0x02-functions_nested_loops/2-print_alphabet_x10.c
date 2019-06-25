#include "holberton.h"

/**
* print_alphabet_x10 - prints the alphabet ten times
*
*
*
*/

void print_alphabet_x10(void)
{
	int timesten;

	for (timesten = 0; timesten <= 10; timesten++)
	{
		int c;

		for (c = 97; c <= 122; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
