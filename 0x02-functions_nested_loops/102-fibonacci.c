#include <stdio.h>
int main (void)
{
	long int fibbo;
	long int nacci = 1;
	long int next;
	int varfor;
	for (varfor = 0; varfor <= 50; varfor++)
	{
		if (varfor <= 1)
		{
			next = varfor;
		}
		else
		{
			next = fibbo + nacci;
			fibbo = nacci;
			nacci = next;
		}
		printf("%ld",next );
		printf("\n");
		
	}
}
