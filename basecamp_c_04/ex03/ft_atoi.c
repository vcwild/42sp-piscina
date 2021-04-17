int		ft_isspace(char c)
{
	return (
		c == '\t' ||
		c == '\v' ||
		c == '\r' ||
		c == '\n' ||
		c == '\f' ||
		c == ' ');
}

int		ft_issign(char c)
{
	return (c == '-' || c == '+');
}

int		ft_isnumber(char c)
{
	return (c >= '0' && c <= '9');
}

int		ft_atoi(char *str)
{
	int	i;
	int	n;
	int	neg_sign_count;

	i = 0;
	neg_sign_count = 0;
	n = 0;
	while (ft_isspace(str[i]))
		i++;
	while (ft_issign(str[i]))
		if (str[i++] == '-')
			neg_sign_count++;
	while (ft_isnumber(str[i]))
	{
		n = (10 * n) + str[i] - '0';
		i++;
	}
	if ((neg_sign_count % 2) != 0)
		return (n * -1);
	return (n);
}
