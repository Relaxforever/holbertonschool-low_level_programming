/**
* _pow_recursion - function to print the pow of two functions
*@x: the first number we will take
*@y: the second number
*Return: return the number of times the functions enters itself
*/
int _pow_recursion(int x, int y)
{
	if (y <= 1)
	{
		if (y < 0)
		{
			return (-1);
		}
		if (y == 1)
		{
			return (x);
		}
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));

}
