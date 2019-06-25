#include "holberton.h"


/**
* print_alphabet - check the code for Holberton School students.
*
* Return: Its a void
*
*
*/
void print_alphabet(void)
{
	int alpha;

	for (alpha = 97; alpha <= 122; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
