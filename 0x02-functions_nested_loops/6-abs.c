#include "holberton.h"

/**
 * _abs - check the absolute value of a num
 *@abs : number given for the absolute
 * Return: Always 0.
 */
int _abs(int abs)
{
	if (abs < 0)
	{
		abs = (-1) * abs;
		return (abs);
	}
	return (abs);
}
