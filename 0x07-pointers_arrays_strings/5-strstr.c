/**
*_strstr - copies a string in a substring
*@haystack: the big string
*@needle: the substring
*Return: return the word
*/
char *_strstr(char *haystack, char *needle)
{
	int cont;

	for (cont = 0;  haystack[cont] != '\0'; cont++)
	{
		if (haystack[cont] == needle[0])
		{
			return (haystack + cont);
		}
	}
	return (haystack + cont);
}
