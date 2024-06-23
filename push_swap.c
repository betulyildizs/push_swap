#include "push_swap.h"

static t_list	*get_next_min(t_list **stack)
{
	t_list	*head;
	t_list	*min;
	int		has_min;

	min = NULL;
	has_min = 0;
	head = *stack;
	if (head)
	{
		while (head)
		{
			if ((head->index == -1) && (!has_min || head->value < min->value))
			{
				min = head;
				has_min = 1;
			}
			head = head->next;
		}
	}
	return (min);
}

void	index_stack(t_list **stack)
{
	t_list	*head;
	int		index;

	index = 0;
	head = get_next_min(stack);
	while (head)
	{
		head->index = index++;
		head = get_next_min(stack);
	}
}

static void create_stack(t_list **stack_a, int argc, char **argv)
{
    char    **args;
    int     i;
    t_list  *node;

    i = 0;
    if (argc == 2)
        args = ft_split(argv[1], ' ');
    else
    {
        args = argv;
        i = 1;
    }
    while (args[i++])
    {
        node = ft_lstnew(ft_atoi(args[i]));
        ft_lstadd_back(stack_a, node);
    }
    index_stack(stack_a);
    if (argc == 2)
        ft_free(args);
}

int main(int argc, char **argv)
{
    if (argc < 2)
        return (-1);
    check_argv(argc, argv);
    t_list  **stack_a;
    t_list  **stack_b;

    stack_a = (t_list **)malloc(sizeof(t_list));
    stack_b = (t_list **)malloc(sizeof(t_list));
	*stack_a = NULL;
	*stack_b = NULL;
    create_stack(stack_a, argc, argv);
    if (sort_cont(stack_a))
    {
        free_stack(stack_a);
        free_stack(stack_b);
        return(0);
    }
    if (ft_lstsize(*stack_a) <= 5)
        simple_sort(stack_a, stack_b);
    else
        radix_sort(stack_a, stack_b);
    free_stack(stack_a);
    free_stack(stack_b);
    return (0);
}