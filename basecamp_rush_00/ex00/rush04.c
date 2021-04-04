void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_boundary(int cols, char first, char middle, char last)
{
	int	i;

	i = 1;
	if (cols <= 0)
		return ;
	ft_putchar(first);
	while (i < cols - 1)
	{
		ft_putchar(middle);
		i++;
	}
	ft_putchar(last);
	ft_putchar('\n');
}

void	ft_print_middle_line(int lines, int cols, char side, char middle)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	if (lines <= 0 || cols <= 0)
		return ;
	while (i < lines - 2)
	{
		ft_putchar(side);
		while (k < cols - 2)
		{
			ft_putchar(middle);
			k++;
		}
		k = 0;
		ft_putchar(side);
		ft_putchar('\n');
		i++;
	}
}

void	rush(int x, int y)
{
	ft_print_boundary(y, 'A', 'B', 'C');
	ft_print_middle_line(x, y, 'B', ' ');
	ft_print_boundary(y, 'C', 'B', 'A');
}
