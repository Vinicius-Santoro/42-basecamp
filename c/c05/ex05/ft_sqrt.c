int	ft_sqrt(int nb)
{
	int	aux;

	aux = 1;
	if (nb > 0)
	{
		while (aux * aux <= nb)
		{
			if (aux * aux == nb)
				return (aux);
			else if (aux == 46341)
				return (0);
			else if (aux > 46341)
				return (0);
			else
				aux++;
		}
	}
	return (0);
}
