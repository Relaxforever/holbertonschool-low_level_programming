#include "holberton.h"
/**
* _islower - checks for lowercase character
*@c : receives a integer
* Return: returns zero
*/
int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
