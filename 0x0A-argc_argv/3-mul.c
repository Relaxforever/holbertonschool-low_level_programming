#include <stdio.h>
#include <stdlib.h>
#define unused(a) (void)(a)
/**
*main - prints the name of the program
*@argc: counts the number of arguments
*@argv: stores the arguments in a array
*Return: always zero
*/

int main(int argc, char *argv[])
{
	int one;
	int two;
	int mult;

	unused(argc);
	if (argc == 3)
	{
		one = atoi(argv[1]);
		two = atoi(argv[2]);
		mult = one * two;
		printf("%d\n", mult);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
