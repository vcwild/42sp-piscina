/*
	ordenar uma matriz de inteiros em ordem crescente
	{2, 4, 6, 22, 8, 2, 1} --> {1, 2, 2, 4, 6, 8, 22}
*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = -1;
	while (++i < size)
	{
		j = -1;
		while (++j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
				ft_swap(&tab[j], &tab[j + 1]);
		}
	}
}
