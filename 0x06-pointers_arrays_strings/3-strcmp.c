/**
 * _strcmp - compare two strings and print the difference between the two
 *@s1: get the first string
 *@s2: get the second string
 * Return: return the diference between the two strings
 */
int _strcmp(char *s1, char *s2)
{
	int len;

	for (len = 0; s1[len] != '\0' && s2[len] != '\0'; len++)
	{
		if (s1[len] != s2[len])
		{
			return (*s1 - *s2);
		}
	}
	if (s1[len] < s2[len])
	{
		return (*s1 - *s2);
	}
	else
	{
		return (*s1 - *s2);
	}
}
