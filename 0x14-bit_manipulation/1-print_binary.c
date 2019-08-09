#include <unistd.h>
/**
*print_binary - change a number from decimal to binary
*@n: the int given
*return: always zero
*/
void print_binary(unsigned long int n)
{
	int len, cont;
	unsigned int binary;
	char zero = '0';
	char one = '1';

	if (n == 0)
	{
		write(1, &zero, 1);
	}
	len = 0;
	/**for (len = 0; n >> len; len++)
	{
	}
	*/
	while (n >> len)
	{
		len++;
	}
	for (cont = len - 1; cont >= 0; cont--)
	{
		binary = n >> cont;
		if (binary & 1)
		{
			write(1, &one, 1);
		}
		else
		{
			write(1, &zero, 1);
		}
	}
}
