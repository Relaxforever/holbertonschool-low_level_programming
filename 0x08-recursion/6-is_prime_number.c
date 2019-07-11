/**
*primenumber - checks the squere root
*@fi: takes the first number
*@se: evaluates the second
*Return: The prime number
*/
int primenumber(int fi, int se)
{
	if (se == fi)
	{
		return (1);
	}
	else
	{
		if (se % fi == 0)
		{
			return (0);
		}
		return (primenumber(fi + 1, se));
	}
}

/**
*is_prime_number - checks the function and prints the square root
*@n: given int
*Return: the square root
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (primenumber(2, n));

}
