int		ft_is_prime(int nb)
{
	int		i;

	i = 3;
	if (nb <= 0 || nb % 2 == 0)
		return (0);
	if (nb == 1 || nb == 2)
		return (1);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
