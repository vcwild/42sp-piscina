#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int dividend = 0;
	int divisor = 3;
	int quotient = 0;
	int remainder = 0;
	int *quo = &quotient;
	int *rem = &remainder;

	ft_div_mod(dividend, divisor, quo, rem);
	if (divisor == 0)
	{
		printf("%d / %d = not defined\n", dividend, divisor);
		printf("%d %% %d = not defined\n", dividend, divisor);
		printf("(%d x %d) + %d = 0\n", divisor, quotient, remainder);
		return (0);
	}
	printf("%d / %d = %d\n", dividend, divisor, quotient);
	printf("%d %% %d = %d\n", dividend, divisor, remainder);
	printf("(%d x %d) + %d = %d\n", divisor, quotient, remainder, dividend);
	return (1);
}
