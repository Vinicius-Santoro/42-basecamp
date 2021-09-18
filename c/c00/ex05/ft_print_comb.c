#include <unistd.h>

void	ft_print_comb(void)
{
	int	pos1;
	int	pos2;
	int	pos3;

	pos1 = '0';
	while (pos1 <= '6')
	{
		pos2 = pos1 + 1;
		while (pos2 <= '8')
		{
			pos3 = pos2 + 1;
			while (pos3 <= '9')
			{
				write(1, &pos1, 1);
				write(1, &pos2, 1);
				write(1, &pos3, 1);
				write(1, ", ", 2);
				pos3 = pos3 + 1;
			}
			pos2 = pos2 + 1;
		}
		pos1 = pos1 + 1;
	}
	write(1, "789", 3);
}
