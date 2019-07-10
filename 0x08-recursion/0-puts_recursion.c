#include "holberton.h"

/**
 * _puts_recursion - prints a String.
 *@s: the string that will be printed.
 * Return: nothing.
 */
void _puts_recursion(char *s)
{
	char recu = *s;

	_putchar(recu);
	if (recu != '\0')
	{
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
