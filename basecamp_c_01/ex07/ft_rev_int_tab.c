void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = -1;
	while (++i < --size)
	{
		ft_swap(&tab[i], &tab[size]);
	}
}

/*
	inverta a ordem de uma matriz de inteiros

	ímpar e assimétrica
	{1, 3, 5, 7, 8};
	{8, 7, 5, 3, 1};

	par e assimétrica
	{1, 3, 5, 7};
	{7, 5, 3, 7};
	n = 4
	i = -1
	++i --n --> (0, 3)
	
*/