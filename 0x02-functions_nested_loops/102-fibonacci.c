#include <stdio.h>
/**
*main - prints the fibonacci secuence
* Return: Always zero
*/
int main(void)
{
	long int i;
	long int fibo = 1;
	long int nacci = 1;
	long int nextTerm;

	for (i = 2; i <= 51; ++i)
	{
		printf("%ld, ", fibo);
		nextTerm = fibo + nacci;
		fibo = nacci;
		nacci = nextTerm;
	}
	printf("\n");
	return (0);
}
