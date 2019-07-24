/**
*print_name - gets and array and prints a name
*@name: gets the array string
*@f: function caller
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name); /* puts the parameter to the code it's pointing*/
}
