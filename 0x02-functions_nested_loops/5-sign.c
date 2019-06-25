#include "holberton.h"

/**
 * print_sign - prints the sign of the number displayed
 *@n : the given number of the file
 * Return: 1 if it's a positive number, 0 if it's zero and -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else
	{
		if (n == 0)
		{
		_putchar(48);
		return (0);
		}
		else
		{
			_putchar(45);
			return (-1);
		}
	}
}
