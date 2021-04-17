#include <stdio.h>

int		ft_atoi_base(char *str, char *base);

int		main(void)
{
	char	str[] = "f";
	char	base[] = "0123456789abcdef";
	char	basename[30];
	int		n = 0;

	n = ft_atoi_base(str, base);

	printf("string %s\n", str);
	if (*base == "0123456789abcdef")
		*basename = "hexadecimal";
	printf("in the base of: %s\n", basename);
	printf("int n: %d\n", n);
}
