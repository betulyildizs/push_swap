/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_cmds1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:58:00 by beyildiz          #+#    #+#             */
/*   Updated: 2024/06/28 17:34:38 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	swap(t_stack **stack)
{
	t_stack	*head;
	t_stack	*next;
	int		tmp_val;
	int		tmp_index;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	head = *stack;
	next = head->next;
	if (!head && !next)
		ft_error("Error occured while swapping!");
	tmp_val = head->num;
	tmp_index = head->index;
	head->num = next->num;
	head->index = next->index;
	next->num = tmp_val;
	next->index = tmp_index;
	return (0);
}

int	sa(t_stack **stack_a)
{
	if (swap(stack_a) == -1)
		return (-1);
	ft_putendl_fd("sa", 1);
	return (0);
}
