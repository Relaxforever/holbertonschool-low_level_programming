#include "holberton.h"
/**
* rev_string - takes a string and reverses it.
* @s : takes the position of the string
*/
void rev_string(char *s)
{
	char arra[1000];
	int cont;
	int rever;

	for (cont = 0; s[cont] != '\0'; cont++)
	{
		arra[cont] = *(s + cont);
	}
	for (rever = 0; rever < cont ; rever++)
	{
		arra[rever] = s[(cont - 1) - rever];
	}
	for (rever = 0; rever <= (cont - 1); rever++)
	{
		s[rever] = arra[rever];
	}
}
