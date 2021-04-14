#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char str[] = "queridas";
	char buf[25] = "olá pessoas ";
	char *dest;

	dest = ft_strcat(buf, str);

	printf("buf: '%s'\n", dest);
}
