#include "holberton.h"
/**
* _isdigit - detects if it's the case is Upper.
* @c : takes the number and evaluates it
* Return: 1 if upper , 0 if not
*/
int _isdigit(int c)
{
	int Digit = c;
	int Zero = 48;
	int Nine = 57;

	if (Digit >= Zero && Digit <= Nine)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
