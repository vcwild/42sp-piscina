#include <stdio.h>

void	ft_ft(int *nbr);

int		main(void)
{
	int a = 0;
	int	*pointer = &a;
	printf("a : %d\n", a);
	ft_ft(pointer);
	printf("a : %d\n", a);
}
