#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Print the last digit and do an if evaluation
*
*Return: Always Zero
*/
int main(void)
{
	int n;
	int lastone;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastone = n % 10;

	if (lastone > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastone);
	}
	else
	{
		if (lastone < 6 && lastone != 0)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastone);
		}
		else
		{
			printf("Last digit of %d is %d and is 0\n", n, lastone);
		}
	}
	return (0);
}
