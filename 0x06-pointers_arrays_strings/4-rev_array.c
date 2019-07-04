/**
* reverse_array - reverses an array
*@a : takes the string
*@n : takes the byte number
*/
void reverse_array(int *a, int n)
{
	int arra[1020];
	int cont;
	int rever;

	for (cont = 0; cont < n; cont++)
	{
		arra[cont] = a[cont];
	}
	for (rever = 0; rever < n; rever++)
	{
		a[rever] = arra[cont - 1];
		cont--;
	}
}
