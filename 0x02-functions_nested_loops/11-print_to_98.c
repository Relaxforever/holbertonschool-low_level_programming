#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - check the code for Holberton School students.
 *@n : take the number
 *
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		int tmp;

		for (tmp = n; tmp >= 98; tmp--)
		{
			printf("%d", tmp);
			if (tmp != 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	if (n < 98)
	{
		int tmp2;

		for (tmp2 = n; tmp2 <= 98; tmp2++)
		{
			printf("%d", tmp2);
			if (tmp2 != 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	else
	{
		if (n == 98)
			{
			printf("%d", n);
			}
	}
	printf("\n");
}
