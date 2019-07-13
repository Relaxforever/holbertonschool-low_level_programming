#include <stdio.h>
/**
* nameofprogram - prints the name of the program
*@argc: counts the number of arguments
*@argv: stores the arguments in a array
*Return: always zero
*/

int nameofprogram(int argc, char *argv[])
{
	printf("%s", argv[argc - argc]);
	return (0);
}
