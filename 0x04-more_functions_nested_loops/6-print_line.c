#include "holberton.h"
/**
* print_line - print the numbers from 0 to 9
*@n : takes the integer given
*/
void print_line(int n)
{
	int line = n;
	int tmp;
	int underscore = 95;

	for (tmp = 0; tmp < line; tmp++)
	{
		_putchar(underscore);
	}
	_putchar('\n');
}
