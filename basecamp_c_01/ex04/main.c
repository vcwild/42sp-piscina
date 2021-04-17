#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int dividend = 4;
	int divisor = 3;
	int *a = &dividend;
	int *b = &divisor;

	printf("BEFORE\n");
	printf("*a:\t%d\t(dividend)\n", *a);
	printf("*b:\t%d\t(divisor)\n", *b);

	ft_ultimate_div_mod(a, b);

	printf("AFTER\n");
	printf("*a:\t%d\t(quotient)\n", *a);
	printf("*b:\t%d\t(remainder)\n", *b);

	printf("int dividend\t(%d) == deref pointer a (%d)?\t", dividend, *a);
	if (*a == dividend)
		printf("TRUE\n");
	else
		printf("FALSE\n");
	printf("int divisor\t(%d) == deref pointer b (%d)?\t", divisor, *b);
	if (*b == divisor)
		printf("TRUE\n");
	else
		printf("FALSE\n");
}
