#include <stdio.h>

char	*ft_strupcase(char *str);

int		main(void)
{
	char num[] = "0934850";
	char empty[] = "";
	char str[] = "AmIgos";
	char upper[] = "testando";
	char *p;
	
	printf("'%s' >> ", num);
	p = ft_strupcase(num);
	printf("'%s'\n", p);

	printf("'%s' >> ", empty);
	p = ft_strupcase(empty);
	printf("'%s'\n", p);

	printf("'%s' >> ", str);
	p = ft_strupcase(str);
	printf("'%s'\n", p);

	printf("'%s' >> ", upper);
	p = ft_strupcase(upper);
	printf("'%s'\n", p);
}
