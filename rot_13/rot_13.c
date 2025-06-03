
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_rot_13(int ac, char **av)
{
	int	i;
	
	i = 0;
	if (ac != 2)
		ft_putchar('\n');
	while(av[1][i])
	{
		if (av[1][i] >= 'a' && av[1][i] <= 'm')
			ft_putchar(av[1][i] + 13);
		else if (av[1][i] > 'm' && av[1][i] <= 'z')
			ft_putchar(av[1][i] - 13);
		else if (av[1][i] >= 'A' && av[1][i] <= 'M')                                                                           ft_putchar(av[1][i] + 13);
		else if (av[1][i] > 'M' && av[1][i] <= 'Z')                                                                       ft_putchar(av[1][i] - 13);
		else 
			ft_putchar(av[1][i]);
		i++;
	}
	ft_putchar('\n');
}

int main (int ac, char **av)
{
	if(ac != 2 )
	{
		ft_putchar('\n');
		return(0);
	}
	ft_rot_13(ac, av);
}
