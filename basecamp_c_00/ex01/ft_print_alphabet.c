#include <unistd.h>

void ft_print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		write(1, &letter, 1);
		letter++;
	}
}

void main()
{
	ft_print_alphabet();
}