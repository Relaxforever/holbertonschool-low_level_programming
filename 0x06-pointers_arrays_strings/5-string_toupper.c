/**
*string_toupper - changes all lowercase letters of a string to uppercase
*@d: change the words
*Return: The Uppercase string
*/
char *string_toupper(char *d)
{
	int len;
	int a = 97;
	int z = 122;
	int sub = 32;

	for (len = 0; d[len] != '\0'; len++)
	{
		if ((d[len] > a) && (d[len] < z))
		{
			d[len] = d[len] - sub;
		}
	}
	return (d);
}
