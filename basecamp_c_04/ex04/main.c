#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);

int		main(void)
{
	int	num = 3445645;
	char dec[] = "0123456789";
	char hex[] = "0123456789abcdef";
	char oct[] = "012345678";
	char bin[] = "01";

	write(1, "dec: ", 5);
	ft_putnbr_base(num, dec);
	write(1, "\n", 1);
	write(1, "hex: ", 5);
	ft_putnbr_base(num, hex);
	write(1, "\n", 1);
	write(1, "oct: ", 5);
	ft_putnbr_base(num, oct);
	write(1, "\n", 1);
	write(1, "bin: ", 5);
	ft_putnbr_base(num, bin);
	write(1, "\n", 1);
}
