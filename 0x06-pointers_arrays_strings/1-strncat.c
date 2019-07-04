/**
* _strncat - appends two strings deppending of the number of bytes = n
*@dest : first string
*@src : second string
*@n : number of bytes it will receive
* Return: the two string added together
*/

char *_strncat(char *dest, char *src, int n)
{
	int cont;
	int append;

	for (cont = 0; dest[cont] != '\0'; cont++)
	{
	}
	for (append = 0; src[append] != '\0' && append < n; append++)
	{
		dest[cont + append] = src[append];
	}
	dest[cont + append] = '\0';
	return (dest);
}
