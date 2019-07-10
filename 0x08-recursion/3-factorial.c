/**
* factorial - function to print the lenght of a string with a recursion
*@n: the string we will take
*Return: return the number of times the functions enters itself
*/
int factorial(int n)
{
	if (n <= 1)
	{
		if (n < 0)
		{
			return (-1);
		}
		return (1);
	}
	return (n * factorial(n - 1));
}
