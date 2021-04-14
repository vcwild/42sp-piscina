char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

/*
	localizar uma substring em uma string
	"uma string bem longa mesmo\0"
	"bem longa mesmo\0"
	"uma"
	"string"
	"mesmo"

		*to_find -> ponteiro de busca
		*str -> string a ser percorrida ou buscada

	vamos percorrer a string até achar a substring (to_find)
*/