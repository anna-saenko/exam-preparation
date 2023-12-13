#include <unistd.h>

int	find_idx(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c - 'A' + 1);
	}
	else
	{
		return (c - 'a' + 1);
	}
}

int	main(int ac, char **av)
{
	int	i;
	int j;

	if (ac > 1)
	{
		i = 0;
		while (av[1][i])
		{
			j = 0;
			while (j < find_idx(av[1][i]))
			{
				write(1, &av[1][i], 1);
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
