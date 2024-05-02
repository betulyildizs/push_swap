/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:05:20 by beyildiz          #+#    #+#             */
/*   Updated: 2024/05/02 17:20:59 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf.h"

void print_stack(Stack a)
{
	int	i;

	i = 0;
	ft_printf("Stack contents:\n");
	while (i <= a.top) 
	{
		ft_printf("%d\n", a.values[i]);
		i++;
	}
}

int	push_onto_stack(int argc, char *argv[], Stack a)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		a.values[++a.top] = ft_atoi(argv[i]);
		if (a.top > MAX_SIZE - 1)
			return (1);
		i++;
	}
	print_stack(a);
	return (0);
}

int	check_number(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-')
		{
			if (str[++i] > '9' || str[++i] < '0')
			{
				ft_printf("Error\n");
				return (0);
			}
		}
		else if (str[i] > '9' || str[i] < '0')
		{
			ft_printf("ERROR\n");
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	Stack	a;
	int		i;

	if (argc < 0 || argc == 1)
	{
		ft_printf("error\n");
		return (0);
	}
	a.top = -1;
	i = 0;
	while (argv[i])
	{
		check_number(ft_strdup(argv[i]));
		i++;
	}
	push_onto_stack(argc, argv, a);
	return (0);
}
