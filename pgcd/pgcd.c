#include <stdio.h>

int	pgcd(int a, int b)
{
	if (a < 0)
	{
		a = -a;
	}
	if (b < 0)
	{
		b = -b;
	}
	while (a != b)
	{
		if (a > b)
		{
			a -= b;
		}
		else
		{
			b -= a;
		}
	}
	return (a);
}

int	main(void)
{
	printf("%d\n", pgcd(81, -153));
}