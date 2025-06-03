

#include <unistd.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_expand_str(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac != 2)
		ft_putchar('\n');
	while(av[1][i])
	{
		while(av[1][i] == ' ')
			i++;
		while(av[1][i] != ' ' && av[1][i] != '\0')
		{	
			ft_putchar(av[1][i]);
			i++;
		}
		if (av[1][i] == '\0')                                                                                         break;
		while(av[1][i] == ' ')
		{
			i++;
		}
		if (av[1][i] == '\0')
			break;
		ft_putchar (' ');
		ft_putchar (' ');
		ft_putchar (' ');
	}
	ft_putchar('\n');
}

int main (int ac, char **av)
{
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_expand_str(ac, av);
}
