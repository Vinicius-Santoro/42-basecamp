int	ft_iterative_factorial(int nb)
{
	int	aux;

	aux = 1;
	if (nb < 0)
		return (0);
	else if (nb == 1 || nb == 0)
		return (1);
	while (nb > 0)
	{
		aux = aux * nb--;
	}
	return (aux);
}
