#include <stdio.h>
int main (void)
{
	unsigned long long int i;
	unsigned long long int fibo = 0;
	unsigned long long int nacci = 1;
	unsigned long long int nextTerm;

	for (i = 1; i < 52; ++i)
	{
		printf("%lld, ", fibo);
		nextTerm = fibo + nacci;
		fibo = nacci;
		nacci = nextTerm;
	}
	printf("\n");
    return 0;
}
