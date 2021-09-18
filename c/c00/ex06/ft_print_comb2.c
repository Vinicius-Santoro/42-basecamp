#include <unistd.h>

void	ft_putchar(char c);
void	convert_to_char(int d, int u);

void	ft_print_comb2(void)
{
	int	pos1;
	int	pos2;

	pos2 = 0;
	while (pos2 <= 98)
	{
		pos1 = pos2 + 1;
		while (pos1 <= 99)
		{
			convert_to_char(pos2, pos1);
			if (!(pos2 == 98 && pos1 == 99))
				write(1, ", ", 2);
			pos1++;
		}
		pos2++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	convert_to_char(int d, int u)
{
	ft_putchar(48 + (d / 10));
	ft_putchar(48 + (d % 10));
	ft_putchar(' ');
	ft_putchar(48 + (u / 10));
	ft_putchar(48 + (u % 10));
}
