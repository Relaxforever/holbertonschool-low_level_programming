#include "holberton.h"

/**
*times_table - print the table from 0 to 9
*
*/

void times_table(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int power = i * j;

			if (power >= 10)
			{
				_putchar(' ');
				_putchar((power / 10) + '0');
				_putchar((power % 10) + '0');
				if (j != 9)
				{
				_putchar(',');
				}
			}
			else
			{
				if (power <= 9)
				{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(power + '0');
					if (j != 9)
					{
					_putchar(',');
					}
				}
			}
		} _putchar('\n');
	}
}
