/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_data_type.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 17:20:47 by beyildiz          #+#    #+#             */
/*   Updated: 2024/02/18 13:26:02 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_datatype(va_list arg, const char *format, int j)
{
	int	len;

	len = 0;
	if (format[j] == 'c')
		len = ft_printchr(va_arg(arg, int));
	else if (format[j] == '%')
		len = ft_printchr('%');
	else if (format[j] == 's')
		len = ft_printstr(va_arg(arg, char *));
	else if (format[j] == 'd' || format[j] == 'i')
		len = (ft_printnbr(va_arg(arg, int)));
	else if (format[j] == 'u')
		len = (ft_printunsigned(va_arg(arg, unsigned int)));
	else if (format[j] == 'p')
		len = (ft_printptr(va_arg(arg, unsigned long long int)));
	else if (format[j] == 'x' )
		len = (ft_printhex(va_arg(arg, unsigned int), 'x'));
	else if (format[j] == 'X')
		len = (ft_printhex(va_arg(arg, unsigned int), 'X'));
	return (len);
}
