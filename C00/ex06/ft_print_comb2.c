#include <unistd.h>

void	ft_print(int n)
{
	char	div;
	char	mod;

	div = n / 10 + 48;
	mod = n % 10 + 48;
	write (1, &div, 1);
	write (1, &mod, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print(a);
			ft_print(b);
			if (a != 98)
			{
				write (1, ", ", 1);
			}
			b++;
		}
		a++;
	}
}
