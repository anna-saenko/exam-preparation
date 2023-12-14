#include <stdio.h>

int	pgcd(int a, int b)
{
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
	printf("%d\n", pgcd(42, 12));
}