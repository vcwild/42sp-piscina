char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	src_iter;

	i = 0;
	src_iter = 0;
	while (dest[i] != '\0')
		i++;
	while ((src[src_iter] != '\0') && (src_iter < nb))
	{
		dest[i] = src[src_iter];
		src_iter++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
	n caracteres da string src vao concatenar na string dest
	n = 2
	string dest ->	"olá pessoas \0"	--> i = 12	(i final)
	string src	->	"queridas\0"			--> src_iter = 8	(src_iter final)
	string buffer -> "olá pessoas queridas\0" --> 	i + src_iter --> tamanho final
*/