#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int				main(void)
{
	unsigned int n = 0;
	char str[] = "amigos";
	char buf[13] = "olar ";
	int size = 13;

	n = ft_strlcat(buf, str, size);

	printf("buf: '%s'\n", buf);
	printf("size: %d\n", n);

}
