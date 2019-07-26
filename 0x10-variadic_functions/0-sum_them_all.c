#include <stdarg.h>
/**
*sum_them_all - sums all the numbers my dud
*@n: sums everything in order
*Return: the sum of the numbers
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list arglist;
	unsigned int cont;
	int sum;
	sum = 0;

	va_start(arglist, n);

	for (cont = 0; cont < n; cont++)
	{
		sum += va_arg(arglist, int);
	}
	va_end(arglist);

	return (sum);
}
