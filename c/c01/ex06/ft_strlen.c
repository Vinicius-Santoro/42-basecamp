#include<unistd.h>

int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		cont = cont + 1;
	}
	return (cont);
}
