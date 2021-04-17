#include "ft_putchar.h"

typedef struct	s_boundary_params
{
	int		cols;
	int		lines;
	char	*arr;
}				t_boundary_params;

static void		print_boundary(t_boundary_params p)
{
	int	i;

	i = 1;
	if (p.cols <= 0 || p.lines <= 0)
		return ;
	ft_putchar(p.arr[0]);
	if (p.cols == 1)
	{
		ft_putchar('\n');
		return ;
	}
	while (i < p.cols - 1)
	{
		ft_putchar(p.arr[1]);
		i++;
	}
	ft_putchar(p.arr[2]);
	ft_putchar('\n');
}

static void		print_middle_line(int cols, int lines, char *arr)
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

void			rush(int x, int y)
{
	char	top_arr[3];
	char	mid_arr[2];
	char	bot_arr[3];

	top_arr[0] = 'A';
	top_arr[1] = 'B';
	top_arr[2] = 'C';
	mid_arr[0] = 'B';
	mid_arr[1] = ' ';
	bot_arr[0] = 'A';
	bot_arr[1] = 'B';
	bot_arr[2] = 'C';
	print_boundary((t_boundary_params){x, y, top_arr});
	print_middle_line(x, y, mid_arr);
	if (y >= 2)
		print_boundary((t_boundary_params){x, y, bot_arr});
}