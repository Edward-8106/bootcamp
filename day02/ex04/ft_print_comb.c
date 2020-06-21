/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoko <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 11:53:02 by enoko             #+#    #+#             */
/*   Updated: 2020/06/21 12:54:48 by enoko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{ 
		write(1,&c,1);
}
void ft_print_comb(void)
{
			int i;
			int j;
			int k;
			
			i = -1;

			while(i <= 7)
			{
				i = i + 1;
				j = i;
				while(j <= 8)
				{
					j = j + 1;
					k = j;
					while(k < 9)
					{
						k = k + 1;
						ft_putchar(i + '0');
						ft_putchar(j + '0');
						ft_putchar(k + '0');
						ft_putchar(',');
						ft_putchar(' ');
					}
				}
			}
}


