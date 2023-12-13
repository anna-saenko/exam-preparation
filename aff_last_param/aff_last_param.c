#include <unistd.h>

void	aff_last_param(int ac, char **av)
{
	if (ac > 1)
	{
		while (*av[ac - 1])
		{
			write(1, av[ac - 1]++, 1);
		}
	}
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	if (ac)
	{
		aff_last_param(ac, av);
	}
}
