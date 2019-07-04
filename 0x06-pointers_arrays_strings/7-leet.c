/**
*leet - change letters for numbers
*@trad: string given
*Return: return the changed string
*/
char *leet(char *trad)
{
	int reco;
	int len;
	char matr [5][2] = {{'a', 'A'}, {'e', 'E'}, {'o', 'O'},
			 {'t', 'T'}, {'l', 'L'}};
	char num [5] = {'4', '3', '0', '7', '1'};

	for (len = 0; trad[len] != '\0'; len++)
	{
		for (reco = 0; reco < 5; reco++)
		{
			if (matr[reco][0] == trad[len] || matr[reco][1] == trad[len])
			{
				trad[len] = num[reco];
			}
		}
	}
	return (trad);
}
