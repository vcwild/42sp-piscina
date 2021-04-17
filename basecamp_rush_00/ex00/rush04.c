#include "ft_putchar.h"

void	ft_print_boundary(int cols, int lines, char *arr)
{
	int	i;

	i = 1;
	if (cols <= 0 || lines <= 0)
		return ;
	ft_putchar(arr[0]);
	if (cols == 1)
	{
		ft_putchar('\n');
		return ;
	}
	while (i < cols - 1)
	{
		ft_putchar(arr[1]);
		i++;
	}
	ft_putchar(arr[2]);
	ft_putchar('\n');
}

void	ft_print_middle_line(int cols, int lines, char *arr)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	if (lines <= 1 || cols <= 0)
		return ;
	while (i < lines - 2)
	{
		ft_putchar(arr[0]);
		while (k < cols - 2)
		{
			ft_putchar(arr[1]);
			k++;
		}
		k = 0;
		if (cols > 1)
			ft_putchar(arr[0]);
		ft_putchar('\n');
		i++;
	}
}

void	rush(int x, int y)
{
	char	top_arr[3];
	char	mid_arr[2];
	char	bot_arr[3];

	top_arr[0] = 'A';
	top_arr[1] = 'B';
	top_arr[2] = 'C';
	mid_arr[0] = 'B';
	mid_arr[1] = ' ';
	bot_arr[0] = 'C';
	bot_arr[1] = 'B';
	bot_arr[2] = 'A';
	ft_print_boundary(x, y, top_arr);
	ft_print_middle_line(x, y, mid_arr);
	if (y >= 2)
		ft_print_boundary(x, y, bot_arr);
}
