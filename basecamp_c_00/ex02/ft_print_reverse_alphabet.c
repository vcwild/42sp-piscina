#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char letter;

	letter = 'z';
	while (letter > 'a' - 1)
	{
		write(1, &letter, 1);
		letter--;
	}
}

int	main()
{
	ft_print_reverse_alphabet();
}
