#include <stdio.h>
/**
*main - prints the fibonacci secuence
* Return: Always zero
*/
int main(void)
{
	unsigned long long int i;
	unsigned long long int fibo = 1;
	unsigned long long int nacci = 1;
	unsigned long long int nextTerm;

	for (i = 2; i < 50; ++i)
	{
		printf("%lld, ", fibo);
		nextTerm = fibo + nacci;
		fibo = nacci;
		nacci = nextTerm;
	}
	printf("\n");
	return (0);
}
