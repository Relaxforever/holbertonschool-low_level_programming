/**
 * _strcmp - compare two strings and print the difference between the two
 *@s1: get the first string
 *@s2: get the second string
 * Return: return the diference between the two strings
 */
int _strcmp(char *s1, char *s2)
{
	int lenF, lenS;

	for (lenF = 0; s1[lenF] != '\0'; lenF++)
	{
	}
	for (lenS = 0; s2[lenS] != '\0'; lenS++)
	{
	}
	if (lenF != lenS)
	{
		return (*s1 - *s2);
	}
	else
	{
		if (lenF < lenS)
		{
			return (*s1 - *s2);
		}
		else
		{
			return (*s1 - *s2);
		}
	}
}
