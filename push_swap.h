/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:05:17 by beyildiz          #+#    #+#             */
/*   Updated: 2024/04/29 14:23:18 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

#define PUSH_SWAP_H

#define MAX_SIZE 1000

typedef	struct
{
	int	values[MAX_SIZE];
	int	top;
} Stack;

int	ft_atoi(char *str);
int	push_onto_stack(int argc, char *argv[], Stack a);
int	check_number(Stack a);

#endif
