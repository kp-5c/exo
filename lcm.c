/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenoist <ebenoist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 15:28:31 by ebenoist          #+#    #+#             */
/*   Updated: 2025/06/16 15:37:43 by ebenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int g;
	if (a > b)
		g = a;
	else
		g = b;
	if (a == 0 || b == 0)
		return (0);		
	while (1)
	{
		if ((g % a == 0) && (g % b == 0))
			return(g);
		g++;
	}
}