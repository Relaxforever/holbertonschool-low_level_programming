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
	int revch;

	for (revch = 48; revch <= 57; revch++)
	{
		putchar(revch);
		if (revch < 57)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
