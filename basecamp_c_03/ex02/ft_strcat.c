/*
	pega a string "dest", apaga o byte nulo final e apenda a string "src" ao final
	de dest e cria ao final da dest um byte nulo '\0'
*/

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
	string dest ->	"olá pessoas \0"	--> i = 12	(i final)
	string src	->	"queridas\0"			--> j = 8	(j final)
	string buffer -> "olá pessoas queridas\0" --> 	i + j --> tamanho final
*/