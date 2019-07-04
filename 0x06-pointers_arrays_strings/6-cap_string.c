/**
*cap_string - makes capital letters after a certain conditio
*@m: 
*
*/
char *cap_string(char *m)
{
	int len;

	for (len = 0; m[len] != '\0'; len++)
	{
		if( m[len] == 0)
		{
			if( m[len] >= 97 && m[len] <= 122)
			{
				(m[len] = m[len] - 32);
			}
		}
		if ( m[len] == ',' || m[len] == ';' || m[len] == '.' ||
			m[len] == '!' || m[len] == '?' || m[len] == '"' ||
			m[len] == '(' || m[len] == ')' || m[len] == '{' ||
			m[len] == '}' || m[len] == ' ' || m[len] == '\n' ||
			m[len] == '\t' )
			{
				if ( m[len + 1] >= 97 && m[len + 1] <= 122)
					{
						(m[len + 1] = m[len + 1] - 32);
					}
			}
	}
	return (m);
}
