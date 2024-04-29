/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:05:20 by beyildiz          #+#    #+#             */
/*   Updated: 2024/04/29 15:03:53 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf.h"


/*void print_stack(Stack a)
{
	int	i;

	i = 0;
	ft_printf("Stack contents:\n");
	while (i <= a.top) 
	{
		ft_printf("%d\n", a.values[i]);
		i++;
	}
}*/

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


int	check_number(Stack a)
{
	int	i;

	i = 0;
	while (a.values[i])
	{
		if (a.values[i] == '-')
		{
			if (a.values[i++] > '9' && a.values[i++] < '0')
			{
				ft_printf("Error\n");
				return (0);
			}
			else
				i++;
		}
		else if (a.values[i] <= '9' && a.values[i] >= '0')
			i++;
		else
		{
			ft_printf("Error\n");
			return (0);
		}
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	Stack	a;

	if (argc < 0 || argc == 1)
	{
		ft_printf("Error\n");
		return (0);
	}
	a.top = -2;
	push_onto_stack(argc, argv, a);
	check_number(a);
	return (0);
	/*while ()
	{
		ft_
	}*/
}
