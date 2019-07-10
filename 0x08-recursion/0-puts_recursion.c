#include "holberton.h"

/**
 * _puts_recursion - prints a String.
 *@s: the string that will be printed.
 * Return: nothing.
 */
void _puts_recursion(char *s)
{
	char recu = *s;

	if (recu == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
	_putchar(*s);
	_puts_recursion(++s);
	}
}
