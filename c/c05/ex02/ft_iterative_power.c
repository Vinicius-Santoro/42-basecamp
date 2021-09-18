int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	aux;

	i = 0;
	aux = 1;
	if (nb == 0 && power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
	{
		while (i != power)
		{
			aux = aux * nb;
			i = i + 1;
		}
	}
	return (aux);
}
