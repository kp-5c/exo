/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenoist <ebenoist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 12:13:21 by ebenoist          #+#    #+#             */
/*   Updated: 2025/06/05 12:19:44 by ebenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int main (int ac, char **av)
{
	if (ac != 2)
	{
		ft_putchar('\n');
		return(0);
	}
	int	i = 0;
	while (av[1][i])
		i++;
	i--;
	while (i >= 0)
	{
		ft_putchar(av[1][i]);
		i--;
	}
	ft_putchar('\n');
	return(0);
}