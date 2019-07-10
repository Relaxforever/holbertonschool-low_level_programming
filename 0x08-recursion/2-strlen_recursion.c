/**
* _strlen_recursion - function to print the lenght of a string with a recursion
*@s: the string we will take
*Return: return the number of times the functions enters itself
*/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
