int		ft_iterative_factorial(int nb)
{
	int i;
	int f;

	i = 0;
	f = nb;
	if (nb < 2)
		return (1);
	while (++i < nb)
		f = f * (nb - i);
	return (f);
}
