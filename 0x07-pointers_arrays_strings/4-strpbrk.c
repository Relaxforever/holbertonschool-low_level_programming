/**
*_strpbrk - Searches the string for any set of bytes
*@s: the array that is going to be search
*@accept: the array where the bytes will be get
*Return: everything
*/
char *_strpbrk(char *s, char *accept)
{
	int cont;
	int cont2;

	for (cont = 0; s[cont] != '\0'; cont++)
	{
		for (cont2 = 0; accept[cont2] != '\0'; cont2++)
		{
			if (s[cont] == accept[cont2])
			{
				return ((s + cont));
			}
		}
	}

	return (0);
}
