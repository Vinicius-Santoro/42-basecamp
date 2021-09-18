char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	int				b;

	a = 0;
	b = 0;
	while (dest[b] != '\0')
	{
		b++;
	}
	while (a < nb && src[a] != '\0')
	{
		dest[b] = src[a];
		a++;
		b++;
	}
	dest[b] = '\0';
	return (dest);
}
