int		ft_is_alpha(char c)
{
	if (((c >= '0') && (c <= '9')) ||
		((c >= 'a') && (c <= 'z')) ||
		((c >= 'A') && (c <= 'Z')))
		return (1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	cap;

	i = 0;
	str = ft_strlowcase(str);
	cap = str[0];
	while (str[i] != '\0')
	{
		if (cap >= 'a' && cap <= 'z')
		{
			str[i] = str[i] - 32;
			cap = 0;
		}
		if (!ft_is_alpha(str[i]))
		{
			cap = str[i + 1];
		}
		i++;
	}
	return (str);
}
