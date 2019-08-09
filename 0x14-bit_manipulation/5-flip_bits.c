/**
*flip_bits - tells the number of bits it needs to change.
*@n: first number
*@m: second number
*Return: the number of changes it needs to be made.
**/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int cont;
	int tmp = 0;
	int eval = 0;

	for (cont = 0; cont < 64; cont++)
	{
		if (((n >> cont) & 1) == ((m >> cont) & 1))
		{
			tmp++;
		}
	}
	eval = 64 - tmp;
	return (eval);
}
