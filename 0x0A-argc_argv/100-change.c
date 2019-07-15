#include <stdio.h>
#include <stdlib.h>
/**
*main - prints the name of the program
*@argc: counts the number of arguments
*@argv: stores the arguments in a array
*Return: always zero if correct one if false
*/
int main(int argc, char *argv[])
{
	int eucli[] = {25, 10, 5, 2, 1};
	int count, change, count2;

	if (argc == 2)
	{
		change = atoi(argv[1]);
		for (count = 1; change > 0; count++)
		{
			if (change >= eucli[0])
			{
				change = change - eucli[0];
				count2++;
			}
			else if (change >= eucli[1])
			{
				change = change - eucli[1];
				count2++;
			}
			else if (change >= eucli[2])
			{
				change = change - eucli[2];
				count2++;
			}
			else if (change >= eucli[3])
			{
				change = change - eucli[3];
				count2++;
			}
			else if (change >= eucli[4])
			{
				change = change - eucli[4];
				count2++;
			}
		}
		printf("%d\n", count2);
		return (0);
	}
	printf("Error\n");
	return (1);
}
