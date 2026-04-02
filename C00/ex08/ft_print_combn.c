#include <unistd.h>

void	ft_print(int *tab, int n)
{
	char	c;
	int	i;

	i = 0;
	while (i < n)
	{
		c = tab[i] + 48;
		write (1, &c, 1);
		i++;
	}
	if (tab[0] != 10 - n)
	{
		write (1, ", ", 2);
	}
}

void	ft_solve(int *tab, int n, int start, int index)
{
	if (index == n)
	{
		ft_print(tab, n);
		return ;
	}
	while (start < 10)
	{
		tab[index] = start;
		ft_solve(tab, n, start + 1, index + 1);
		start++;
	}
}

void	ft_print_combn(int n)
{
	int	tab[10];
	if (n > 0 && n < 10)
	{
		ft_solve(tab, n, 0, 0);
	}
}

int	main()
{
	ft_print_combn(3);
	return (0);
}
