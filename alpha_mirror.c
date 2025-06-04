#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	alpha_mirror(char **av)
{
	int	i;

	i = 0;
	while(av[1][i])
	{
		if(av[1][i] >= 'a' && av[1][i] <= 'z')
		{
			av[1][i] = 'a' - av[1][i] + 'z';
			ft_putchar(av[1][i]);
			i++;
		}
		else if(av[1][i] >= 'A' && av[1][i] <= 'Z') 
                {
                        av[1][i] = 'A' - av[1][i] + 'Z';
                        ft_putchar(av[1][i]);
                        i++;
                }
		else
		{
			ft_putchar(av[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
}

int main (int ac, char **av)
{
	if(ac != 2)
	{
		ft_putchar('\n');
		return(0);
	}
	alpha_mirror(av);
}
