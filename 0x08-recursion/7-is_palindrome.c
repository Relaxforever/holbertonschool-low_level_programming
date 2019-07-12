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
/**
*palindrome - checks the if word are palindrome
*@first: starts from the beginning
*@second:starts from the end
* Return: if the function cumple
*/
int palindrome(char *first, char *second)
{
	if (*first != *second)
	{
		return (0);
	}
	if (first >= second)
	{
		return (1);
	}
		return (palindrome(first + 1, second - 1));
}
/**
*is_palindrome - a plaindrome
*@s: function
*Return: Jesus
*/
int is_palindrome(char *s)
{
	return (palindrome(s, s + _strlen_recursion(s) - 1));
}
