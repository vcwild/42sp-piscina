int		ft_isspace(int c)
{
	return (
		c == '\t' ||
		c == '\v' ||
		c == '\n' ||
		c == '\r' ||
		c == '\f' ||
		c == ' ');
}

int		ft_find_char(char c, char *str)
{
	int i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_atoi_base(char *str, char *base)
{
	int		n;
	int		base_len;
	int		neg_sign_count;

	n = 0;
	neg_sign_count = 0;
	base_len = ft_strlen(base);
	if (base_len < 2)
		return (0);
	while (ft_isspace(*str) || *str == '-' || *str == '+')
	{
		if (*str == '-')
			neg_sign_count++;
		str++;
	}
	while (ft_find_char(*str, base) < base_len)
		n = n * base_len - ft_find_char(*str++, base);
	if ((neg_sign_count % 2) == 0)
		return (n * -1);
	return (n);
}
