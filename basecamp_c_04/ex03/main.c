#include <stdio.h>

int	ft_atoi(char *str);

int		main(void)
{
	char str[] = "   ---++455";
	int num = 0;
	num = ft_atoi(str);
	printf("%d", num);
	printf("\n");
}
