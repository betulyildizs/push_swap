/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:05:20 by beyildiz          #+#    #+#             */
/*   Updated: 2024/05/07 16:47:26 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf.h"

/*void	print_stack(Stack a)
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

int	print_sorted_stack(Stack *a)
{
	int	i;

	i = 0;
	while (i <= a->top)
	{
		ft_printf("%d\n", a->values[i]);
		i++;
	}
	return (0);
}

int	shell_sort(int n, Stack *a)
{
	int		gap;
	int		i;
	char	temp;
	int		j;

	gap = n / 2;
	while (gap > 0)
	{
		i = gap;
		while (i < n)
		{
			temp = a->values[i];
			j = i;
			while (j >= gap && a->values[j - gap] > temp)
			{
				a->values[j] = a->values[j - gap];
				j -= gap;
			}
			i++;
		}
		gap /= 2;
	}
	print_sorted_stack(a);
	return (0);
}

int	push_onto_stack(int argc, char *argv[], Stack a)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		a.values[++a.top] = ft_atoi(argv[i]);
		if (a.top > MAX_SIZE - 1)
			return (1);
		i++;
	}
	//print_stack(a);
	return (0);
}

int	check_number(char *str, int argc, char **argv, Stack a)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
		{
			if (str[i + 1] > '9' || str[i + 1] < '0')
			{
				ft_printf("Error\n");
				return (0);
			}
			i++;
		}
		else if (str[i] > '9' || str[i] < '0')
		{
			ft_printf("ERROR\n");
			return (0);
		}
		i++;
	}
	return (push_onto_stack(argc, argv, a));
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
	i = 1;
	while (argv[i])
	{
		check_number(ft_strdup(argv[i]), argc, argv, a);
		i++;
	}
	shell_sort(argc - 1, &a);
	return (0);
}
