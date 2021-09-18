#include <unistd.h>

int	main(int argc, char **argv)
{
	int	parameter_positions;
	int	column;

	parameter_positions = argc - 1;
	column = 0;
	if (argc > 1)
	{
		while (parameter_positions > 0)
		{
			column = 0;
			while (argv[parameter_positions][column] != '\0')
			{
				write(1, &argv[parameter_positions][column], 1);
				column++;
			}
			write(1, "\n", 1);
			parameter_positions--;
		}
	}
	return (0);
}
