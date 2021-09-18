int	ft_recursive_power(int nb, int power)
{
	int	aux;

	aux = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power >= 2)
		return (aux * ft_recursive_power(aux, power - 1));
	else
		return (aux);
}
