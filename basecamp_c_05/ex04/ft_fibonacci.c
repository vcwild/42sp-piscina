int		ft_fibonacci(int index)
{
	int		fib[index + 1];
	int		i;

	fib[0] = 0;
	fib[1] = 1;
	i = 2;
	while (i++ <= index)
		fib[i] = fib[i - 1] + fib[i - 2];
	return (fib[index]);
}
