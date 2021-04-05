int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
	crie uma função que calcule o tamanho de uma string
		*str = 'C';
		str[2];
		*(str + 1);
		*(str + 2) == str[2];
		{'C', 'a', 'f', 'e', 'C', 'o', 'd', 'e', 's', '\0'}
*/