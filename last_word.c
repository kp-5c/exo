/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenoist <ebenoist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 13:24:48 by ebenoist          #+#    #+#             */
/*   Updated: 2025/06/05 13:52:23 by ebenoist         ###   ########.fr       */
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
	int i = 0;
	while (av[1][i])
		i++;
	if (av[1][i] == '\0')
		i--;
	while (av[1][i] == 9 || av[1][i] == 32)
		i--;
	while(av[1][i] != 9 && av[1][i] != 32)
		i--;
	if (av[1][i] == 9 || av[1][i] == 32)
		i++;
	while(av[1][i] && (av[1][i] != 9 && av[1][i] != 32))
	{
		ft_putchar(av[1][i]);
		i++;
	}
	ft_putchar('\n');
}