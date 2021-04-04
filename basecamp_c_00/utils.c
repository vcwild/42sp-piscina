void	ft_generate_matrix(int matrix[], int size, int i)
{
	if (i > size)
	{
		return 0;
	}
	matrix[i] = i;

	return generate_matrix();
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

int	ft_intlen(int value)
{
	int len;

	len = 0;
	while(value)
	{
		len++;
		value = value / 10;
	}
	return (len);
}

int	ft_power(int base, int a) {
	if (a != 0)
		return (base * ft_power(base, a - 1));
	else
		return 1;
}