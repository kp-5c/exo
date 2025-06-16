/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenoist <ebenoist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 15:42:21 by ebenoist          #+#    #+#             */
/*   Updated: 2025/06/16 16:04:00 by ebenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	i = 2;
	int num ;
	if (ac == 2)
	{
		num = atoi(av[1]);
		if (num == 1)
			printf("1");
		while( i <= num )
		{
			if(num % i == 0)
			{
				printf("%d", i);
				num /= i;
				if(num > 1)
					printf("*");
			}
			else 
				i++;
		}
	}
	printf("\n");
	return(0);
}