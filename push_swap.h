/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:05:17 by beyildiz          #+#    #+#             */
/*   Updated: 2024/05/07 16:46:54 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

#define PUSH_SWAP_H

#define MAX_SIZE 11000
#define INT_MAX 2147483647
#define INT_MIN -2147483648

#include <stdlib.h>

typedef	struct
{
	int	values[MAX_SIZE];
	int	top;
} Stack;

int		ft_atoi(char *str);
int		push_onto_stack(int argc, char *argv[], Stack a);
int		check_number(char *str, int argc, char **argv, Stack a);
char	*ft_strdup(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
int		shell_sort(int n, Stack *a);

#endif
