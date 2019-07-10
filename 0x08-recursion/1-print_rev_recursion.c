#include "holberton.h"

/**
 * _print_rev_recursion - prints a reversed String.
 *@s: the string that will be printed.
 * Return: nothing.
 */
void _print_rev_recursion(char *s)
{
	char recu = *s;

	if (recu != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
