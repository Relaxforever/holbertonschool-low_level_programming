#include "holberton.h"

/**
 * _isalpha - checks if the number that is given is alphanumeric
 *@c: number given by the file
 * Return: Return 1 if it's and alphanumeric
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
