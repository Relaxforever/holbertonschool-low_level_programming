
/**
*_strchr - detects when a character gets
*@s: takes the array and evaluates it
*@c: the character that is going to get evaluate
*Return: null if not the same or c
*/
char *_strchr(char *s, char c)
{
	int cont = 0;

	while (s[cont] != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
	cont++;
	}
	if (*s == c)
	{
		return (s);
	}
	return ('\0');
}
