#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
*main - prints the name of the program
*@argc: counts the number of arguments
*@argv: stores the arguments in a array
*Return: always zero if correct one if false
*/

int main(int argc, char *argv[])
{
	int one;
	int two;
	int mult;

	for (one = 1; one < argc; one++)
	{
		for (two = 0; argv[one][two]; two++)
		{
			if (isdigit(argv[one][two]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		mult += atoi(argv[one]);
	}
	printf("%d\n", mult);
	return (0);
}
