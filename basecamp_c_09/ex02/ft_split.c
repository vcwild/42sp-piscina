#include <stdlib.h>

int		ft_is_space(char to_find, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
		if (to_find == str[i])
			return (1);
	}
	return (0);
}

int		ft_wordcount(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] && (ft_is_space(&str[i], charset)))
			i++;
		if (str[i] && !(ft_is_space(&str[i], charset)))
		{
			i++;
			while (str[i] && !(ft_is_space(&str[i], charset)))
				i++;
		}
	}
	return (i);
}

char	*create_word(char *str, int i, int j)
{
	char	*word;
	int		o;

	o = 0;
	if ((word = (char *)malloc(sizeof(char) * (j - i))) == ((void *)0))
		return ((void *)0);
	while (i < j)
	{
		word[o] = str[i];
		i++;
		o++;
	}
	word[o] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		idx;
	int		j;
	int		i;
	int		words;

	idx = 0;
	if ((words = ft_wordcount(str, charset)))
	{
		if (!str || ((arr = (char **)malloc(sizeof(char *) * (words + 1))) == ((void *)0)))
			return ((void *)0);
		i = 0;
		while (idx < words)
		{
			while (ft_is_space(str[i], charset) && (str[i]))
				i++;
			j = i;
			while (!(ft_is_space(str[j], charset)) && (str[j]))
				j++;
			arr[idx++] = create_word(str, i, j);
			i = j + 1;
		}
	}
	else
		arr = (char **)malloc(sizeof(char *));
	arr[idx] = (void *)0;
	return (arr);
}
