/**
* _strcat - appends two strings
*@dest : first string
*@src : second strin
* Return: the two string added together
*/

char *_strcat(char *dest, char *src)
{
	int cont;
	int append;

	for (cont = 0; dest[cont] != '\0'; cont++)
	{
	}
	for (append = 0; src[append] != '\0'; append++)
	{
		dest[cont + append] = src[append];
	}
	dest[cont + append] = '\0';
	return (dest);
}
