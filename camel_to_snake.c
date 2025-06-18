/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenoist <ebenoist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 14:51:23 by ebenoist          #+#    #+#             */
/*   Updated: 2025/06/18 15:02:15 by ebenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
 
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int main (int ac, char **av)
{
	if(ac == 2)
	{
		int i = 0;
		while(av[1][i])
		{
			if(av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				av[1][i] = av[1][i] + 32;
				i--;
				ft_putchar('_');
				i++;
			}
			else 
			{
				ft_putchar(av[1][i]);
				i++;
			}
		}	
	}
	ft_putchar('\n');
}