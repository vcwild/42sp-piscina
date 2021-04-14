int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
	man strcmp --> pesquisar como os parametros da função devem ser implementados
	retorna 0 se s1 e s2 forem iguais
	retorna valor negativo se s1 é menor que s2
	retorna positivo se s1 for maior que s2

	char = 'a' --> 97
	char = 'b' --> 98

	"chara"
	"charb"
*/