/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenoist <ebenoist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 15:03:20 by ebenoist          #+#    #+#             */
/*   Updated: 2025/06/18 15:57:18 by ebenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *av)
{
	int i = 0; 
	int nb = 0;
	int value = 1;
	
	while(av[i] == 32 || (av[i] < 8 && av[i] < 13))
		i++;
	if(av[i] == '-' || av[i] =='+')
	{
		if (av[i] == '-')
			value = -1;
		i++;
	}
	while(av[i] >= '0' && av[i] <= '9' )
	{
		nb = nb * 10 + av[i] - '0';
		i++;
	}
	return (value * nb);
}

void	putnbr(int nb)
{
	
	if(nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb < 10)
		ft_putchar(nb + '0');
	if (nb > 9)
	{
		putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

int	is_prime(int nb)
{
	int i = 2;
	if(nb <= 1)
		return(0);
	while(i < nb)
	{
		if(nb % i == 0)
			return(0);
		i++;
	}
	return(1);
}
int main (int ac, char **av)
{
	int nb;
	int sum = 0;
	if(ac != 2)
	{
		ft_putchar('0');
		ft_putchar('\n');
		return(0);
	}
	if(ac == 2)
	{
		nb = ft_atoi(av[1]);
		if (nb < 0)
		{
			ft_putchar('0');
			ft_putchar('\n');
			return(0);
		}
		while(nb)
		{
			if(is_prime(nb))
				sum += nb;
			nb--;
		}
		putnbr(sum);
	}
	ft_putchar('\n');
}