#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Runs the file and if the n > 0 prints positive and
* n < 0 negative,else it will print 0
* Return: Always 0 (Success)
*/
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e')
		{
			continue;
		}
			if (ch == 'q')
			{
				continue;
			}
		putchar(ch);
	}
		putchar('\n');
	return (0);
}
