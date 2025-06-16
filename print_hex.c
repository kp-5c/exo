/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenoist <ebenoist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 16:15:09 by ebenoist          #+#    #+#             */
/*   Updated: 2025/06/16 16:31:02 by ebenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int ft_atoi(char *str)
{
	unsigned int res = 0; 
	unsigned int i = 0;
	
	while(str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i++] - '0';
	}
	return (res);
}
void	put_hex(int nbr)
{
	char *d = "0123456789abcdef";

	if(nbr >= 16)
		put_hex(nbr / 16);
	write (1, &d[nbr % 16], 1);
}
int main (int ac, char **av)
{
	if (ac == 2)
		put_hex(ft_atoi(av[1]));
	write(1, "\n", 1);
	return(0);
}