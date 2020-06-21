/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoko <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 12:59:58 by enoko             #+#    #+#             */
/*   Updated: 2020/06/21 14:19:15 by enoko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}
void ft_print_comb2(void)
{
	int k;
	int i;
	i = 0;
	k = 0;

	while(i < 99)
	{
		k = i + 1;
		while(k < 99)
		{
				ft_putchar(i / 10 + '0');
				ft_putchar(i % 10 + '0');
				ft_putchar(' ');
				ft_putchar(k / 10 + '0');
				ft_putchar(k % 10 + '0');
				if((i / 10 != 9) || (i % 10 != 8))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			k++;
		}
		i++;	
	}

}
int main()
{
	ft_print_comb2();
	return 0;
}
						


