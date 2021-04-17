#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int a = 4;
	int b = 2;
	int *p = &a;
	int *d = &b;

	printf("before\ta: %d b: %d\n", a, b);
	ft_swap(p, d);
	printf("after\ta: %d b: %d\n", a, b);
}
