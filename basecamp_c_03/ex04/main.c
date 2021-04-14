#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char str[] = "The art of losing isn’t hard to master";
	char find[] = "isn’t hard";
	char *c;

	printf("find '%s' in '%s'\n", find, str);
	c = ft_strstr(str, find);
	printf("result: %s\n", c);
}
