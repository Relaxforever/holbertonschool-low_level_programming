#include <unistd.h>
int printf(const char *format, ...)
{
	static int flag = 0;
	(void) format;
	if (!flag)
	{	
		write(1, "9 8 10 24 75 - 9\n", 17);
	}
	flag = 1;
	return (0);
}

int puts(const char *s)
{
	(void) s;
	write(1, "Congratulations, you win the Jackpot!\n", 38);
	return (0);
}
