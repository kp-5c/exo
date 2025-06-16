/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenoist <ebenoist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 14:35:03 by ebenoist          #+#    #+#             */
/*   Updated: 2025/06/16 15:26:13 by ebenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int main(int ac, char **av)
{
	if(ac == 2)
	{
		int i = 0;
		while(av[1][i])
		{
			if(av[1][i] == '_')
			{
				i++;
				av[1][i] = (av[1][i]-32);
			}
			ft_putchar(av[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
}