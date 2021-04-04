#include <unistd.h>

void	ft_write(char f, char s, char t)
{
	write(1, &f, 1);
	write(1, &s, 1);
	write(1, &t, 1);
}

void	ft_break(char f, char s, char t)
{
	if (f == '7' && s == '8' && t == '9')
		return ;
	else
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char f;
	char s;
	char t;

	f = '0';
	s = '1';
	t = '2';
	while (f < s && f < t && f <= '9')
	{
		while (f < s && s < t && s <= '9')
		{
			while (f < t && s < t && t <= '9')
			{
				ft_write(f, s, t);
				ft_break(f, s, t);
				t++;
			}
			s++;
			t = s + 1;
		}
		f++;
		s = f + 1;
		t = f + 2;
	}
}

int	main()
{
	ft_print_comb();
}
