#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int		main(void)
{
	char num[] = "0934850";
	char empty[] = "";
	char str[] = "amigos";
	char upper[] = "AmiGos";
	int is_true;

	is_true = ft_str_is_lowercase(num);
	printf("'%s'\tis lowercase? %d\n", num, is_true);

	is_true = ft_str_is_lowercase(str);
	printf("'%s'\tis lowercase? %d\n", str, is_true);

	is_true = ft_str_is_lowercase(upper);
	printf("'%s'\tis lowercase? %d\n", upper, is_true);

	is_true = ft_str_is_lowercase(empty);
	printf("'%s'\t\tis lowercase? %d\n", empty, is_true);
}
