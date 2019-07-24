#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
*main - do the calculator with the alligator
*@argc: The count of arguments
*@argv: all arguments put in an array
*Return: the calculated amount and also my soul
*/
int main(int argc, char *argv[])
{
	int one;
	int two;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((strcmp(argv[2], "+")) && strcmp(argv[2], "-") &&
	strcmp(argv[2], "/") && strcmp(argv[2], "*") &&
	strcmp(argv[2], "%"))
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0)
	 && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	one = atoi(argv[1]);
	two = atoi(argv[3]);
	printf("%d\n", (*get_op_func(argv[2]))(one, two));
	return (0);
}
