/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft-print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoko <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 09:17:53 by enoko             #+#    #+#             */
/*   Updated: 2020/06/19 10:24:29 by enoko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
	write(1 , &c , 1);
}
void ft_print_reverse_alphabet(void)
{
	char i;
	i='z';
	while (i >= 'a')

{
		ft_putchar(i);
	i--;
}

}

