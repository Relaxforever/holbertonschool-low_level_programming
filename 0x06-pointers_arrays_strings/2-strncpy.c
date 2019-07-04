/**
* _strncpy - copies a string
*@dest : the destination string
*@src : the string that is going to get copied
*@n : number of bytes
* Return: Return the copied array
*/

char *_strncpy(char *dest, char *src, int n)
{
	int copycont;

	for (copycont = 0; copycont < n && src[copycont] != '\0'; copycont++)
	{
		dest[copycont] = src[copycont];
	}
	while (copycont < n)
	{
		dest[copycont] = '\0';
		copycont++;
	}
	return (dest);
}
