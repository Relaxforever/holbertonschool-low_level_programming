/**
*rot13 - main file
*@cypher: ajdjajdaj
*Return: Everything
*/
char *rot13(char *cypher)
{
	char inp[500] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[500] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int len, cont;

	for (len = 0; cypher[len] != '\0'; len++)
	{
		for (cont = 0; cont <= 52; cont++)
		{
			if (cypher[len] == inp[cont])
			{
				cypher[len] = out[cont];
				break;
			}
		}
	}
	return (cypher);
}
