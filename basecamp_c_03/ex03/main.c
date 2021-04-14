#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	char str[] = "queridas";
	char buf[20] = "olá pessoas ";
	int n = 8;
	char *c;

	printf("append first %d letters of '%s' to '%s'\n", n, str, buf);
	c = ft_strncat(buf, str, n);
	printf("result: '%s'\n", c);
}
