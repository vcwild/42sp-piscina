#include <stdio.h>

void	ft_putnbr(int nbr);

int		main(void)
{
	int num = 0;
	printf("Enter a number: ");
	scanf("%d", &num);

	ft_putnbr(num);
	printf("\n");
}
