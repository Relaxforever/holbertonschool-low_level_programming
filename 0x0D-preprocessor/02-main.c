#include <stdio.h>
/**
*main - prints the name of the file it's being compiled with
*Return: always zero
*/
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
