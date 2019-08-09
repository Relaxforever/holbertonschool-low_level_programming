/**
*clear_bit - changes the bit in the position for 0
*@n: takes the numberino.
*@index: the place in why we will make the change
*Return: the number changed
**/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n = (*n & ~(1 << index));
		return (1);
	}
	return (-1);
}
