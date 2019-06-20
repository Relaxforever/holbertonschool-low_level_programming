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
	char ch = '0';

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
