/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:44:20 by beyildiz          #+#    #+#             */
/*   Updated: 2024/02/18 13:29:12 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int				ft_printf(const char *format, ...);
int				ft_index_cont(va_list arg, const char *format);
int				ft_datatype(va_list arg, const char *format, int j);
int				ft_printchr(int c);
int				ft_printstr(char *str);
int				ft_printnbr(int nbr);
int				ft_countdigit(int nbr);
size_t			ft_strlen(const char *str);
int				ft_printunsigned(unsigned int nbr);
int				ft_printptr(unsigned long long ptr);
void			ft_putptr(uintptr_t nbr);
int				ft_ptrlen(uintptr_t nbr);
int				ft_printhex(unsigned int nbr, const char str);
void			ft_puthex(unsigned int nbr, const char str);
int				ft_hexlen(unsigned int nbr);
int				ft_countunsigned(unsigned int nbr);

#endif
