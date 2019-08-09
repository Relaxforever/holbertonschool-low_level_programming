/**
*get_endianness - check if the machine if big endian or little en
*Return: God
**/
int get_endianness(void)
{
	int first = 1;
	char *c;

	c = (char *)&first;
	if (*c == 1)
	{
		return (1);
	}
		return (0);
}
