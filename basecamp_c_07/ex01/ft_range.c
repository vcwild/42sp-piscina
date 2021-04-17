#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	i = 0;
	if (min >= max)
		return ((void *)0);
	arr = (int *)malloc(sizeof(*arr) * (max - min - 1));
	if (arr == ((void *)0))
		return ((void *)0);
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
