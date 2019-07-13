#include <stdio.h>
/**
*main - prints the name of the program
*@argc: counts the number of arguments
*@argv: stores the arguments in a array
*Return: always zero
*/

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
