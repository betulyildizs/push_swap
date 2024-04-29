/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_functions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:20:34 by beyildiz          #+#    #+#             */
/*   Updated: 2024/02/18 13:27:59 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchr(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (ft_printstr("(null)"));
	while (str[i] != '\0')
	{
		ft_printchr(str[i]);
		i++;
	}
	return (i);
}

int	ft_printnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		ft_printstr("-2147483648");
	}
	else if (nbr < 0)
	{
		ft_printchr('-');
		ft_printnbr(nbr * (-1));
	}
	else if (nbr >= 10)
	{
		ft_printnbr(nbr / 10);
		ft_printchr(nbr % 10 + '0');
	}
	else
		ft_printchr(nbr + '0');
	return (ft_countdigit(nbr));
}

int	ft_printunsigned(unsigned int nbr)
{
	if (nbr == 0)
	{
		ft_printchr('0');
		return (1);
	}
	else if (nbr >= 10)
	{
		ft_printunsigned(nbr / 10);
		ft_printchr(nbr % 10 + '0');
	}
	else
		ft_printchr(nbr + '0');
	return (ft_countunsigned(nbr));
}
