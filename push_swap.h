#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}				t_list;
//Eğer typedef kullanmasaydınız, struct s_list yapısını kullanmak için her 
//seferinde tam ismini yazmanız gerekirdi. 
static void     create_stack(t_list **stack_a, int argc, char **argv);
static size_t	ft_toklen(const char *s, char c);
char	        *ft_strdup(const char *str);
char	        *ft_substr(char const *s, unsigned int start, size_t len);
void            split_cond(const char *s, char **ret, char c, size_t  i);
char	        **ft_split(const char *s, char c);
size_t	        ft_strlen(const char *a);
size_t	        ft_strlcpy(char *dest, const char *src, size_t size);
t_list	        *ft_lstnew(int value);
long	        ft_atoi(const char *str);
t_list	        *ft_lstlast(t_list *head);
void	        ft_lstadd_back(t_list **stack, t_list *new);
void	        ft_lstadd_front(t_list **stack, t_list *new);
int	            ft_lstsize(t_list *head);
void	        printList(t_list *head);
void	        ft_putchar_fd(char c, int fd);
void	        ft_putstr_fd(const char *str, int fd);
void	        ft_putendl_fd(char *str, int fd);
void	        ft_putnbr_fd(int n, int fd);
void            *ft_bzero(void *s, size_t len);
int             ft_abs(int num);
static t_list	*get_next_min(t_list **stack);
void	        index_stack(t_list **stack);
void	        ft_free(char **str);
void	        free_stack(t_list **stack);
int	            sort_cont(t_list **stack);
void	        simple_sort(t_list **stack_a, t_list **stack_b);
void	        sort_5(t_list **stack_a, t_list **stack_b);
static void	    sort_4(t_list **stack_a, t_list **stack_b);
static void	    sort_3(t_list **stack_a);
static int	    get_min(t_list **stack, int val);
void     		sort_3_cond(t_list **stack_a, int min, int next_min);
int		        swap(t_list **stack);
int		        push(t_list **stack_to, t_list **stack_from);
int		        rotate(t_list **stack);
int		        reverseRotate(t_list **stack);
int				get_distance(t_list **stack, int index);
//instructions:
int		        sa(t_list **stack_a);
int		        sb(t_list **stack_b);
int		        ss(t_list **stack_a, t_list **stack_b);
int		        pa(t_list **stack_a, t_list **stack_b);
int		        pb(t_list **stack_b, t_list **stack_a);
int		        ra(t_list **stack_a);
int		        rb(t_list **stack_b);
int		        rr(t_list **stack_a, t_list **stack_b);
int		        rra(t_list **stack_a);
int		        rrb(t_list **stack_b);
int		        rrr(t_list **stack_a, t_list **stack_b);
//check_argv:
static int	    ft_contains(int num, char **argv, int i);
static int		ft_isnum(char *num);
void			check_argv(int argc, char **argv);
int				ft_isdigit(int c);

#endif
