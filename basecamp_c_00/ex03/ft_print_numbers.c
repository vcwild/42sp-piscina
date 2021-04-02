#include <unistd.h>
#define NUMBER_0	48
#define NUMBER_9	57

void	ft_print_numbers(void)
{
	int i;

	i = NUMBER_0;
	while (i <= NUMBER_9)
	{
		write(1, &i, 1);
		i++;
	}
}

void main()
{
	ft_print_numbers();
}