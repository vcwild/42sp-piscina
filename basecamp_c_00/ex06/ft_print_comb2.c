#include <unistd.h>

void ft_write(int a, int b)
{
	char i;
	char j;
	char k;
	char l;

	i = a / 10 + '0';
	j = a % 10 + '0';
	k = b / 10 + '0';
	l = b % 10 + '0';
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, " ", 1);
	write(1, &k, 1);
	write(1, &l, 1);
	if (i == '9' && j == '8' && k == '9' && l == '9')
		return ;
	write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			ft_write(i, j);
			j++;
		}
		i++;
	}
}

int main()
{
	ft_print_comb2();
}
