int		ft_recursive_factorial(int nb)
{
	if (nb < 2)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
