#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int		main(void)
{
	int arr[] = {2, 4, 6, 22, 8, 2, 1};
	int size = sizeof(arr) / sizeof(arr[0]);

	int i = -1;

	printf("before: ");
	while (++i < size)
		printf("%d ", arr[i]);
	printf("\n");

	ft_sort_int_tab(arr, size);

	printf("after: ");
	i = -1;
	while (++i < size)
		printf("%d ", arr[i]);
	printf("\n");
}
