#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_insert_comma_space(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	int	num[3];

	num[0] = '0';
	while (num[0] <= '9')
	{
		num[1] = '0';
		while (num[1] <= '9')
		{
			num[2] = '0';
			while (num[2] <= '9')
			{
				if (num[0] < num[1] && num[1] < num[2])
				{
					ft_putchar(num[0]);
					ft_putchar(num[1]);
					ft_putchar(num[2]);
					if (!(num[0] == '7' && num[1] == '8' && num[2] == '9'))
						ft_insert_comma_space();
				}
				num[2]++;
			}
			num[1]++;
		}
		num[0]++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
