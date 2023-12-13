#include <unistd.h>

int ft_findlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*search_and_replace(char *str, char *a, char *b)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == a[0])
		{
			str[i] = b[0];
		}
		i++;
	}
	return (str);
}

int	main(int ac, char **av)
{
	char *res;

	if ((ac == 4) && (ft_findlen(av[2]) == 1)
		&& (ft_findlen(av[3]) == 1))
	{
		res = search_and_replace(av[1], av[2], av[3]);
		ft_putstr(res);
	}		
	write(1, "\n", 1);
}
