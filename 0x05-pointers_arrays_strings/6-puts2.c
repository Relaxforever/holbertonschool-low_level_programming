#include "holberton.h"
/**
* puts2 - prints a string with putchar
* @str : takes the position of the string
* Return: return the length of a  string
*/
void puts2(char *str)
{
	int cont;

	for (cont = 0; *(str + cont) != '\0'; cont++)
	{
		if (cont % 2 == 0)
		{
			_putchar(*(str + cont));
		}
	}
	_putchar('\n');
}
