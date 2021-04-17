#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int		main(void)
{
	int a = 4;
	int *b = &a;
	int **c = &b;
	int ***d = &c;
	int ****e = &d;
	int *****f = &e;
	int ******g = &f;
	int *******h = &g;
	int ********i = &h;
	int *********j = &i;

	printf("before: 9 deref pointer nbr: %d\n", *********j);
	ft_ultimate_ft(j);
	printf("after: 9 deref pointer nbr: %d\n", *********j);
}
