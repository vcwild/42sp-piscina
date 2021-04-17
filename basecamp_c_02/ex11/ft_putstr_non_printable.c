#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_convert_hex(char c, char *hex)
{
	if (c > 16)
	{
		ft_convert_hex(c / 16, hex);
		ft_convert_hex(c % 16, hex);
	}
	else
		ft_putchar(hex[(int)c]);
}

void	ft_puthex(char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar('\\');
	if (c < 16)
		ft_putchar('0');
	ft_convert_hex(c, hex);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (((str[i] < 32) && (str[i] >= 0)) ||
			(str[i] == 127))
			ft_puthex(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}
