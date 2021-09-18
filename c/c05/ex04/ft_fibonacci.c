int	ft_fibonacci(int index)
{
	int	temp;

	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index > 1)
	{
		temp = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (temp);
	}
	else
		return (-1);
}
