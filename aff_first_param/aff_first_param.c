#include <unistd.h>

void	aff_first_param(char **argv)
{
	while (*argv[1])
	{
		write(1, argv[1]++, 1);
	}	
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		aff_first_param(argv);
	}
	write(1, "\n", 1);
}
