#include <stdio.h>

int		ft_strlen(char *str);

int		main(void)
{
	char	str[] = "Tamanho 9";
	int		n = 0;

	n = ft_strlen(str);

	printf("'%s' length is: %d\n", str, n);
}
