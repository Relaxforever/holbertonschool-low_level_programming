#include <stdarg.h>
#include <stdio.h>
/**
*print_strings - sums all the numbers my dud
*@n: Number of arguments that will be taken by the function
*@separator: the variable that will be between them
*Return: prints the arguments that in this case are numbers
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	/*define the list*/
	va_list arglist;
	unsigned int cont;
	 char  *string;

	/*Initialize the list, telling the program it will take the arguments*/
	va_start(arglist, n);

	for (cont = 0; cont < n; cont++)
	{
		/*take the variables and store it*/
		string = va_arg(arglist, char *);
		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}
		if (separator != NULL && cont < (n - 1))
		{
			printf("%s ", separator);
		}
	}
	printf("\n");
	va_end(arglist);
}
