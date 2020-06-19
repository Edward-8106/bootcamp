/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enoko <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 08:06:59 by enoko             #+#    #+#             */
/*   Updated: 2020/06/19 09:03:29 by enoko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar (char c)
{
	write(1, &c, 1);	
}

void ft_print_alphabet(void)
{
	char i;
	i='a';

	while (i <= 'z')
{
	ft_putchar(i);
	i++;
}

}
int main ()
{
	ft_print_alphabet();
	return 0;
}

