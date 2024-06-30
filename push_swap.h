/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:56:35 by beyildiz          #+#    #+#             */
/*   Updated: 2024/06/28 17:32:59 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				num;
	int				index;
	struct s_stack	*next;
	struct s_stack	*back;
}	t_stack;

void	ft_check_args(int argc, char **argv);
void	free_ints(char **ints);
void	create_stack(t_stack **stack, int argc, char **argv);
void	index_stack(t_stack **stack);
int		sa(t_stack **stack_a);
int		pa(t_stack **stack_a, t_stack **stack_b);
int		pb(t_stack **stack_a, t_stack **stack_b);
int		ra(t_stack **stack_a);
int		rra(t_stack **stack_a);
void	simple_sort(t_stack **stack_a, t_stack **stack_b);
void	radix_sort(t_stack **stack_a, t_stack **stack_b);
t_stack	*ft_lstnew(int content);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
t_stack	*ft_lstlast(t_stack *lst);
int		ft_lstsize(t_stack *lst);
char	**ft_split(const char *s, char c);
size_t	ft_strlen(const char *a);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
long	ft_atoi(const char *str);
int		is_sorted(t_stack **stack);
int		get_distance(t_stack **stack, int index);
void	ft_error(char *msg);
void	ft_putendl_fd(char *s, int fd);
void	ft_putstr_fd(char *s, int fd);
int		ft_isdigit(int a);
char	*ft_strdup(const char *str);
void	free_stack(t_stack **stack);
t_stack	*max_node(t_stack **stack);

#endif