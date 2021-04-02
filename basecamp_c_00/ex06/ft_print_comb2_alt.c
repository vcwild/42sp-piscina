#include <stdio.h>
#include <unistd.h>

void	ft_create_matrix(char *arr, int a, int b)
{
	arr[0] = a / 10 + '0';
	arr[1] = a % 10 + '0';
	arr[2] = ' ';
	arr[3] = b / 10 + '0';
	arr[4] = b % 10 + '0';
}

void	ft_write_char(char c)
{
	write(1, &c, 1);
}

void	ft_display_element(char* arr)
{
	ft_write_char(arr[0]);
	ft_write_char(arr[1]);
	ft_write_char(arr[2]);
	ft_write_char(arr[3]);
	ft_write_char(arr[4]);
	if (arr[0] == '9' && arr[1] == '8' && arr[3] == '9' && arr[4] == '9')
		return;
	write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int i;
	int j;
	char arr[5];

	i = 0;
	j = 0;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			ft_create_matrix(arr, i, j);
			ft_display_element(arr);
			j++;
		}
		i++;
	}
}

void main()
{
	ft_print_comb2();
}
