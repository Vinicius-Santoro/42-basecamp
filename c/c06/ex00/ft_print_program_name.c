#include <unistd.h>

int	main(int argc, char **argv)
{
	int	column;

	column = 0;
	if (argc > 0)
	{
		while (argv[0][column] != '\0')
		{
			write(1, &argv[0][column], 1);
			column = column + 1;
		}
		write(1, "\n", 1);
	}
	return (0);
}
