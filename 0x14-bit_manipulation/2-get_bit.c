/**
*get_bit - change from a binary to a unsigned int
*@n: the number given
*@index: the position in binary
*Return: the unsigned number
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int cont;

	for (cont = 0; n >> cont; cont++)
	{
		if (index == cont)
		{
			return ((n >> index) & 1);
		}
	}
	return (-1);
}
