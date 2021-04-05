#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

/*
char matrix[9] = "CafeCodes";

{'C', 'a', 'f', 'e', 'C', 'o', 'd', 'e', 's', '\0'}
	mostrar caracteres na tela (um a um)


	str[] = "Olá pessoas"
	str
	ft_putstr(str)



	n str + n - 1
	...
	3 str + 3
	2 str + 2
	1 str + 1
	0 <-str
*/