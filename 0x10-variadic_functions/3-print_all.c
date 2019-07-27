#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
*print_all - print all types of data.
*@format: gets the type of argument of the passed function
*Return: void functions returns nothing
*/
void print_all(const char * const format, ...)
{
	va_list typeofdata;
	unsigned int cont = 0;
	char *string;

	while (format == NULL)
	{
		printf("\n");
		return;
	}

	va_start(typeofdata, format);
	while (format[cont])
	{
		switch (format[cont])
		{
			case 'c':

				printf("%c", va_arg(typeofdata, int));
				break;
			case 'i':
				printf("%i", va_arg(typeofdata, int));
				break;
			case 'f':
				printf("%f", va_arg(typeofdata, double));
				break;
			case 's':
				string = va_arg(typeofdata, char *);
				if (string != NULL)
				{
					printf("%s", string);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[cont] == 'c' || format[cont] == 'i' || format[cont] == 'f' ||
		format[cont] == 's') && format[cont + 1] != 0)
			printf(", ");
		cont++;
	} printf("\n"), va_end(typeofdata);
}
