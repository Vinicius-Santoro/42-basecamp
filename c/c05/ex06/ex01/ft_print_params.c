#include <unistd.h>

int	main(int argc, char **argv)
{
	int	parameter_positions;
	int	init_print_position;

	parameter_positions = 1;
	init_print_position = 0;
	if (argc > 1)
	{
		while (parameter_positions < argc)
		{
			init_print_position = 0;
			while (argv[parameter_positions][init_print_position] != '\0')
			{
				write(1, &argv[parameter_positions][init_print_position], 1);
				init_print_position++;
			}
			write(1, "\n", 1);
			parameter_positions++;
		}
	}
	return (0);
}
