#include "holberton.h"
/**
* puts_half - counts the len of a String
* @str : takes the position of the string
* Return: return the length of a  string
*/
void puts_half(char *str)
{
	int length;
	int cont;

	while (*(str + length) != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		length = length / 2;
		for (cont = length; *(str + cont) != '\0'; cont++)
		{
			_putchar(*(str + cont));
		}
	}
	else
	{
		length = (length - 1) / 2;
		for (cont = length; *(str + cont) != '\0'; cont++)
		{
			_putchar(*(str + cont));
		}
	}
	_putchar('\n');
}
