/**
*secondaryfunc - checks the squere root
*@fi: takes the first number
*@se: evaluates the second
*Return: The root
*/
int secondaryfunc(int fi, int se)
{
        if (fi * fi > se)
        {
                return (-1);
        }
        if (fi * fi == se)
        {
                return (fi);
        }
        return (secondaryfunc(fi + 1, se));
}

/**
*_sqrt_recursion - checks the function and prints the square root
*@n: given int
*Return: the square root
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (secondaryfunc(1, n));

}
