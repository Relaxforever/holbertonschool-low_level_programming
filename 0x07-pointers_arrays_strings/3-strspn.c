/**
 * _strspn - gets the lenght of a substring.
 *@s: gets the number of bytes of s
 *@accept: bytes of the substring
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	int cont;
	int cont2;
	int fl;
	int bytes = 0;

	for (cont = 0; s[cont] != '\0' && s < accept; cont++)
	{
		fl = 0;
		for (cont2 = 0; accept[cont2] != '\0'; cont2++)
		{
			if (s[cont] == accept[cont2])
			{
				bytes++;
				fl = 1;
			}
		}
		if (fl == 0)
		{
			break;
		}
	}
	return (bytes);
}
