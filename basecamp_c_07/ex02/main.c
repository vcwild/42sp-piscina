#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int res;
	int offset;
	int *range;
	int	min = 0;
	int max = 8;

	res = ft_ultimate_range(&range, min, max);
	if (min >= max)
	{
		printf("expected:\t-1\n");
		printf("got:\t\t%d ", res);
		if (res == -1)
			printf("(OK)\n");
		else
			printf("Error\n");
		return (0);
	}
	offset = 0;
	printf("range: ");
	while (offset < (max - min + 1))
	{
		printf("%d ", range[offset]);
		offset++;
	}
	printf("\nexpected size:\t%d", (max - min));
	printf("\ngot:\t\t%d ", res);
	if (res == (max - min))
		printf("(OK)");
	else
		printf("(Error)");
	printf("\n");
	return (0);
}
