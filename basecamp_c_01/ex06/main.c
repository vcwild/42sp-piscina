#include <stdio.h>

int	ft_strlen(char *str);

int	main()
{
	char str[] = "Ola pessoas";
	int length;

	length = ft_strlen(str);

	printf("O array '%s' tem tamanho %d\n", str, length);
}
