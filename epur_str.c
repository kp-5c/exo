#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	epur_str(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[1][i] == ' ' || av[1][i] == '\f')
		i++;
	j = i + 1;
	while (av[1][i])
	{
		if (av[1][j]  == '\0' && (av[1][i] == ' ' || av[1][i] == '\f'))
			break;
	 	else if ((av[1][i] == ' ' && av[1][j] == ' ') || ( av[1][i] == '\f' && av[1][j] == '\f'))
		{	
			i++;
			j++;
		}
		else 
		{
			ft_putchar(av[1][i]);
			i++; 
			j++;
		}
	}
	ft_putchar('\n');
}

int main (int ac, char **av)
{
	if (ac != 2)
	{
		ft_putchar('\n');
		return(0);
	}
	epur_str(av);
}
