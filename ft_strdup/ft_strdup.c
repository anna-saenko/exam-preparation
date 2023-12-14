#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *str)
{
	char	*dup;
	int		len;
	int		i;

	len = 0;
	while (str[len])
	{
		len++;
	}
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (!dup)
	{
		return (0);
	}
	i = 0;
	while (i < len)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = str[i];
	return (dup);
}

int	main(void)
{
	printf("%s\n", ft_strdup("Hello, I love you"));
}