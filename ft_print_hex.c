/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:33:36 by beyildiz          #+#    #+#             */
/*   Updated: 2024/02/18 14:27:32 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int nbr, const char str)
{
	if (nbr >= 16)
	{
		ft_puthex(nbr / 16, str);
		ft_puthex(nbr % 16, str);
	}
	else
	{
		if (nbr <= 9)
			ft_printchr(nbr + '0');
		else
		{
			if (str == 'x')
				ft_printchr((nbr - 10) + 'a');
			if (str == 'X')
				ft_printchr((nbr - 10) + 'A');
		}
	}
}

int	ft_printhex(unsigned int nbr, const char str)
{
	if (nbr == 0)
		return (write(1, "0", 1));
	else
		ft_puthex(nbr, str);
	return (ft_hexlen(nbr));
}
